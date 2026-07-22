#pragma once
#include "login.h"
//Inherited Class from Login
ref class UserLogin : public login {
private:
    String^ correctUsername;
    String^ correctPassword;

public:
    UserLogin() {
        correctUsername = "admin";
        correctPassword = "1234";
    }

    virtual bool Validate(String^ username, String^ password) override {
        return (username == correctUsername && password == correctPassword);
    }
};
