#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Oct 28 09:31:05 2022

@author: sleepless
"""

import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from sklearn.linear_model import LinearRegression
from sklearn.model_selection import train_test_split


#Zadanie 1
data_csv = pd.read_csv("/Users/student/Downloads/swiss.csv")

v = data_csv.values
c = data_csv.columns

corrMatrix = data_csv.corr()
#Najsilniej skorelowana jest 'Education' z 'Examination' i wynosi 0.6984152962884829


#Zadanie 2
X ,y = v[:,:-1], v[:,-1]

def zad2(X,y):
    linReg = LinearRegression()
    X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=2022, shuffle=False)
    linReg.fit(X_train, y_train)
    y_pred = linReg.predict(X_test)
    return linReg.coef_


wagi = zad2(X, y)
print(wagi)

#Zadanie 3

def createPlot(x, y):
    fig, ax = plt.subplots()
    ax.scatter(x,y)
    ax.set(xlabel = "x", ylabel = "y")

def zad3(X,y):
    linReg = LinearRegression()
    X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=2022, shuffle=False)
    linReg.fit(X_train, y_train)
    y_pred = linReg.predict(X_test)
    createPlot(y_test, y_pred)

zad3(X, y)
#Model nie jest dokładny

#Zadanie 4
mean = v[:,-1].mean()
mask = v[:,-1] < mean
zad4a = v[mask,:]
zad4b = zad4a[:,[0,1,3,4,5]]
zad4c = zad4b[0,:]
zad4cstd = zad4c.std()
#Odchylenie
print(zad4cstd)