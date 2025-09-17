#include "checker.h"
#include <gtest/gtest.h>

// Тест для is_empty
TEST(CheckerTest, IsEmpty_EmptyString_ReturnsTrue) {
    EXPECT_TRUE(is_empty(""));
    EXPECT_FALSE(is_empty("hello"));
}


// Тест для is_valid_base
TEST(CheckerTest, IsValidBase_ValidNumber_ReturnsFalse) {
    EXPECT_FALSE(is_valid_base("2"));
    EXPECT_TRUE(is_valid_base("42"));
    EXPECT_TRUE(is_valid_base("5"));    
    EXPECT_TRUE(is_valid_base("0"));   
    EXPECT_TRUE(is_valid_base("abc"));  
}

// Тест для symbols_check
TEST(CheckerTest, SymbolsCheck_Decimal_ValidChars_ReturnsFalse) {
    EXPECT_FALSE(symbols_check("12345", 3)); 
    EXPECT_TRUE(symbols_check("12345E", 3)); 
    EXPECT_FALSE(symbols_check("12345FF", 4)); 
    EXPECT_TRUE(symbols_check("123E45QQ", 4)); 
}


// Тест для is_clear 
TEST(CheckerTest, IsClear_PureNumber_OutputsCorrect1) {
    EXPECT_TRUE(is_clear("54F432"));    
    EXPECT_TRUE(is_clear("AA998E"));   
    EXPECT_FALSE(is_clear("3320"));
}
