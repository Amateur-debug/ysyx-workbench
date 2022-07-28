/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include "sdb.h"

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */
WP* new_wp(char *EXPR){
  if(free_ == NULL){
    assert(0);
  }
  else{
    WP *a = head;
    head = free_;
    free_ = free_->next;
    head->next = a;
  }
  head->experence = EXPR;
  if(expr(EXPR) == 0 ){
    extern int nr_token;
    head->num = eval(0, nr_token - 1);
  }
  return head;
}

WP* free_wp(WP *wp){
  if(wp == head){
    head = head->next;
    wp->next = free_;
    free_ = wp;
    return head;
  }
  else{
    int i;
    WP *b = head;
    for(i = 0; i < NR_WP; i++){
      if(b->next == wp){
        b->next = wp->next;
        wp->next = free_;
        free_ = wp;
        break;
      }
      else b = b->next;
    }
    return head;
  }
}

