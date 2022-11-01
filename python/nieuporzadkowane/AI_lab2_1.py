# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

#/home/sleepless/Downloads/practice_lab_2.xlsx

#%%
#listing 2.1
import numpy as np
from matplotlib import pyplot as plt
from sklearn.linear_model import LinearRegression
x = np.arange(-3,3, 0.1).reshape((-1,1))
y = np.tanh(x) + np.random.randn(*x.shape)*0.2
ypred = LinearRegression().fit(x,y).predict(x)
plt.scatter(x,y)
plt.xlabel('x')
plt.ylabel('y')
plt.plot(x, ypred)
plt.legend([ 'F(x) - aproksymująca',
'f(x) - aproksymowana zaszumiona'])

#%%
#listing 2.2
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression

bh_data = pd.read_excel('/home/sleepless/Downloads/practice_lab_2.xlsx')
bh_arr = bh_data.values
X, y = bh_arr[:,:-1], bh_arr[:,-1]
X_train, X_test, y_train, y_test =train_test_split(X,y,test_size=0.2,random_state= 221, shuffle=False)

#listing 2.3
linReg = LinearRegression()
linReg.fit(X_train, y_train)
y_pred = linReg.predict(X_test)
minval = min(y_test.min(), y_pred.min())
maxval = max(y_test.max(), y_pred.max())
plt.scatter(y_test, y_pred)
plt.plot([minval, maxval], [minval, maxval])
plt.xlabel('y_test')
plt.ylabel('y_pred')
#%%
#listing 2.4
from sklearn.metrics import mean_absolute_error,mean_squared_error, mean_absolute_percentage_error
X_train, X_test, y_train, y_test = train_test_split(X,y,test_size=0.2, random_state=221, shuffle=True)
linReg = LinearRegression()
linReg.fit(X_train, y_train)
y_pred = linReg.predict(X_test)
mse = mean_squared_error(y_test, y_pred)
mae = mean_absolute_error(y_test, y_pred)
mape = mean_absolute_percentage_error (y_test, y_pred)
#%%
#listing 2.5
X_train, X_test, y_train, y_test = train_test_split(X,y,test_size=0.2,shuffle=True)
plt.boxplot(y_train)
plt.title("Medianowa wartosc mieszkania")
#listing 2.6
outliers = np.abs((y_train - y_train.mean())/y_train.std())>3
X_train_no_outliers = X_train[~outliers,:]
y_train_no_outliers = y_train[~outliers]
y_train_mean = y_train.copy()
y_train_mean[outliers] = y_train.mean()
#%%
#listing 2.7
linReg = LinearRegression()
linReg.fit(X_train, y_train_mean)
bh_cechy=bh_data.columns
niezalezne_cechy = bh_cechy[:-1]
wagi = linReg.coef_
plt.bar(niezalezne_cechy, wagi)
plt.xticks(niezalezne_cechy, rotation='vertical')
#listing 2.8
nowe_dane = np.stack([X[:, 4]/X[:, 7],X[:, 4]/X[:, 5],X[:, 4]*X[:, 3],X[:, 4]/X[:, -1]], axis=-1)
X_additional = np.concatenate([X, nowe_dane], axis=-1)