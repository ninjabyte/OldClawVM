#ifndef ERROR_H_
#define ERROR_H_

/* error code enum */
enum Error
{
	ERR_NO_ERROR,
	ERR_INVALID_FILE,
	ERR_ON_FIRE,
	NUM_ERRORS
};

void error_printmsg(int code);
void error_printmsgln(int code, int line);

#endif /* ERROR_H_ */