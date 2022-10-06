#include <stdio.h>

enum HTTP_STATUS
{
    OK = 200,
    CREATED = 201,
    ACCEPTED = 202,
    NO_CONTENT = 204,
    BAD_REQUEST = 400,
    UNAUTHORIZED = 401,
    FORBIDEN = 403,
    NOT_FOUND = 404,
    CONFLICT = 409,
    METHOD_NOT_ALLOWED = 415,
    INTERNAL_SERVER_ERROR = 500,
    GATEWAY_TIMEOUT = 503
};

int main()
{
    enum HTTP_STATUS success, error;
    success = CREATED;
    error = NOT_FOUND;
    printf("sucess = %d error = %d\n", success, error);
    return 0;
}