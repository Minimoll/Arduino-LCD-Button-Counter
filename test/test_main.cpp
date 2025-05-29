#include "Arduino.h"
#include <unity.h>
#include "logic.h"

// TO RUN MY TESTS CHANGE DIRECTORY TO LCD_SCREEN then run: platformio test -e native

static unsigned long fakeMillis = 0;

unsigned long millis() { return fakeMillis; }

void setUp() {
  count = 0;
  fakeMillis = 0;
}

void test_debounce() {
  TEST_ASSERT_FALSE(debouncedPress(fakeMillis, false));
  
  fakeMillis += 51;
  TEST_ASSERT_TRUE(debouncedPress(fakeMillis, true));

  fakeMillis += 10;
  TEST_ASSERT_FALSE(debouncedPress(fakeMillis, true));
}

void test_pressHandler() {
  TEST_ASSERT_EQUAL(0, count);
  pressHandler();
  TEST_ASSERT_EQUAL(1, count);
}

int main() {
  UNITY_BEGIN();
  RUN_TEST(test_debounce);
  RUN_TEST(test_pressHandler);
  return UNITY_END();
}
