#pragma once

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "pthread.h"
#include "libircclient.h"
#include "struct.h"

bufline *add_to_buffer();
bufptr *init_buffer();
nickname *init_nickentry();
bufptr *channel_buffer();
char *get_input();
int channel_isjoined();
int nick_is_member();
int add_member();
int delete_member();
void send_message();
void send_action();
void send_privmsg();
void show_prompt();
void kick_user();
void rewind_buffer();
void peek_channel();
void print_new_messages();
void exit_cleanup();
void reset_nicklist();
void clear_nicklist();
void clear_msglist();
void clear_all();
void clear_buffer();