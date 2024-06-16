#include "user_authentication.h"

bool UserAuthentication::authenticate_user(const string& username, const string& password) {
    return username == "admin" && password == "12345";
}
