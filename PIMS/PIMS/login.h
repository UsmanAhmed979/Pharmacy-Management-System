#pragma once
using namespace System;
// Abstract Base Class
ref class login abstract {
public:
    virtual bool Validate(String^ username, String^ password) = 0; // Pure virtual
};