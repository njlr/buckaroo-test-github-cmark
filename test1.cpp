#include <gtest/gtest.h>
#include <cmark.h>

TEST(testcmark, basics) {

  cmark_parser* parser = cmark_parser_new(CMARK_OPT_DEFAULT);

  cmark_parser_free(parser);

  ASSERT_TRUE(true);
}
