#include <gtest/gtest.h>

#include "../functions/functions.h"

TEST(hasAdjacentEqual, oEqual) {
    Node* head = nullptr;
    append(head, 10);
    append(head, 20);
    append(head, 30);
    append(head, 40);
    append(head, 50);
    append(head, 60);
    EXPECT_FALSE(hasAdjacentEqual(head));
}