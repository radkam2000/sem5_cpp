#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Oct 28 17:51:54 2022

@author: sleepless
"""

import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from sklearn.linear_model import LinearRegression
from sklearn.model_selection import train_test_split
from sklearn.metrics import mean_absolute_percentage_error, mean_squared_error, mean_absolute_error

dane = pd.read_csv("/home/sleepless/Downloads/Concrete_Data_Out.csv")
val = dane.values
col = dane.columns

zerowe = np.count_nonzero(val==0,axis=0);
mask = np.count_nonzero(val==0,axis=0)==max(np.count_nonzero(val==0,axis=0))
max_zera = np.argmax(zerowe)
print(f"Bedzie to kolumna {col[max_zera]}")

X,y = val[:,:-1],val[:,-1]
X_train, X_test, y_train, y_test = train_test_split(X,y,train_size=0.7,test_size=0.3,random_state=2022,shuffle=False)

outliers = abs((y_train-y_train.mean())/y_train.std())>3
print(f"ilosc wartosci odstajacych {np.count_nonzero(outliers==False)}")
X_train_no_outliers = X_train[~outliers,:]
y_train_no_outliers = y_train[~outliers]
y_train_mean = y_train.copy()
y_train_mean[outliers] = y_train.mean()


linReg=LinearRegression()
linReg.fit(X_train_no_outliers,y_train_no_outliers)
fig,ax=plt.subplots()
wagi=linReg.coef_
ax.bar(col[:-1],wagi)
#water i superplastic

y_pred = linReg.predict(X_test)
minval = min(y_test.min(), y_pred.min())
maxval = max(y_test.max(), y_pred.max())
fig,ax=plt.subplots()
ax.scatter(y_test,y_pred)
ax.plot([minval, maxval], [minval, maxval])

mse = mean_squared_error(y_test, y_pred)
mae = mean_absolute_error(y_test, y_pred)
mape = mean_absolute_percentage_error (y_test, y_pred)
print(f"mse: {mse}")
print(f"mae: {mae}")
print(f"mape: {mape}")
