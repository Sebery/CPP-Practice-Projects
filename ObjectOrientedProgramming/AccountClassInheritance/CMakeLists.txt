cmake_minimum_required(VERSION 3.17)
project(AccountClassInheritance)

set(CMAKE_CXX_STANDARD 17)

add_executable(AccountClassInheritance main.cpp Account.cpp Account.h Savings_Account.cpp Savings_Account.h Account_Utils.cpp Account_Utils.h Checking_Account.cpp Checking_Account.h Trust_Account.cpp Trust_Account.h)