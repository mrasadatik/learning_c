//
// Created by mrmak on 5/14/25.
//

#ifndef COMMENT_H

/*
 * If a comment kept unterminated from the header file
 * it will carry forward to the included file
 * in the preprocessor and make that invalid (see below till ./comment.c's line 16)
 */

#define COMMENT_H

/*
 * Starts a comment

#endif //COMMENT_H
