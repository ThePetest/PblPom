#include "pom_cookies.h"
#include "pom.h"

#define SETTINGS_STRUCT_KEY 2

void pomSaveCookies() {
    persist_write_data(SETTINGS_STRUCT_KEY, &app.settings, sizeof(PomSettings));
}

bool pomLoadCookies() {
    return (E_DOES_NOT_EXIST != persist_read_data(SETTINGS_STRUCT_KEY, &app.settings, sizeof(PomSettings)));
}

void pomClearCookies() {
    persist_delete(SETTINGS_STRUCT_KEY);
}

void pomInitCookiesModule() {

}
