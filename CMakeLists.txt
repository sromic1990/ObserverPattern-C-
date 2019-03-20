cmake_minimum_required(VERSION 3.13)
project(ObserverPattern)

set(CMAKE_CXX_STANDARD 17)

add_executable(ObserverPattern main.cpp IObserver.h Shop.h Shop.cpp ASubject.h ASubject.cpp DummyProduct.h DummyProduct.cpp)