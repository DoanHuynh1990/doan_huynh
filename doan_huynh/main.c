#include <stdio.h>
#include <string.h>

typedef struct {
	char light;
	char fan;
	char motor;
} smartHome_t;

const char* data = "HTTP1.1 200 OK{"
"\"light\": \"on\","
"\"fan\" : \"off\","
"\"motor\" : \"off\"}";

smartHome_t pair_data(const char* data);

int main() {
	smartHome_t x = pair_data(data);


	printf("Light: %d\n", x.light);
	printf("Fan: %d\n", x.fan);
	printf("Motor: %d\n", x.motor);


}

smartHome_t pair_data(const char* data) {
	smartHome_t result = { 0, 0, 0 };
	const char* p;

	p = strstr(data, "\"light\"");
	if (p && strstr(p, "on")) result.light = 1;

	p = strstr(data, "\"fan\"");
	if (p && strstr(p, "on")) result.fan = 1;

	p = strstr(data, "\"motor\"");
	if (p && strstr(p, "on")) result.motor = 1;

	return result;
}
