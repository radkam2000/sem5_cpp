#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Oct 21 18:36:02 2022

@author: sleepless
"""
#/home/sleepless/Downloads/practice_lab_2.xlsx
#/C:\Users\unknown\Downloads\practice_lab2.xlsx
#%%
#2.1
#biblioteka do wizualzacji danych, tutaj macierzy korelacji
import seaborn as sns
##
import matplotlib.pyplot as plt
import pandas as pd
import numpy as np

data =  pd.read_excel("C:/Users/unknown/Downloads/practice_lab2.xlsx")

def printPlot(x, y, title=""):
    fig, ax = plt.subplots()
    ax.scatter(x, y)
    ax.set_title(title)
    ax.set(xlabel="x", ylabel="y")
    
num_row,num_col=data.shape
data_values=data.values
data_names=data.columns
#wyswietlenie macierzy korelacji za pomoca seaborna
plt.figure(figsize=(10,10))
sns.heatmap(data.corr(),cmap="BuPu",annot=True)
plt.show
##

for i in range (num_col-1):
    printPlot(data_values[:,i],data_values[:,13], data_names[13]+ " od "+ data_names[i])
#%%
#2.2
from sklearn.metrics import mean_absolute_error,mean_squared_error, mean_absolute_percentage_error
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression

def trening(ilosc_prob):
    
    bh_data = pd.read_excel('/home/sleepless/Downloads/practice_lab_2.xlsx')
    bh_arr = bh_data.values
    X, y = bh_arr[:,:-1], bh_arr[:,-1]   
    srednia=0
    for i in range(ilosc_prob):
        X_train, X_test, y_train, y_test = train_test_split(X,y,test_size=0.2, shuffle=True)
        linReg = LinearRegression()
        linReg.fit(X_train, y_train)
        y_pred = linReg.predict(X_test)
        minval = min(y_test.min(), y_pred.min())
        maxval = max(y_test.max(), y_pred.max())
        fig, ax = plt.subplots()
        ax.scatter(y_test, y_pred)
        ax.plot([minval, maxval], [minval, maxval])
        ax.set(xlabel="x", ylabel="y")
        srednia+=mean_absolute_percentage_error(y_test, y_pred)
    
    return srednia/ilosc_prob

print(trening(20))

#%%
#2.3
