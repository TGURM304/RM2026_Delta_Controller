//
// Created by guan on 2025/12/29.
//
#ifndef APP_MSG_DEF_H
#define APP_MSG_DEF_H

struct app_msg_hand_to_custom {
    bool key_state[4];
    int16_t rs_data[2];
} __attribute__((packed));

#endif //APP_MSG_DEF_H