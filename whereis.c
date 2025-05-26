#include "whereis.h"
#include <stdio.h>
#include <string.h>

void whereis_helper(TreeNode *node, const char *target, char *path) {
    if (node == NULL) return;

    char new_path[1024];
    if (strcmp(path, "") == 0) {
        // path가 빈 문자열이면 루트 기준 시작
        snprintf(new_path, sizeof(new_path), "/%s", node->name);
    } else if (path[strlen(path) - 1] == '/') {
        // path가 /로 끝나면 슬래시 하나만 유지
        snprintf(new_path, sizeof(new_path), "%s%s", path, node->name);
    } else {
        // 평범한 연결
        snprintf(new_path, sizeof(new_path), "%s/%s", path, node->name);
    }

    if (strcmp(node->name, target) == 0) {
        printf("Found: %s\n", new_path);
    }

    whereis_helper(node->left, target, new_path);
    whereis_helper(node->right, target, path);
}

void whereis(DirectoryTree *dTree, const char *target) {
    whereis_helper(dTree->root, target, "");
}
