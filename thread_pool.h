//
// Created by yuhao on 2021/12/24.
//

#ifndef THREAD_POOL4C_THREAD_POOL_H
#define THREAD_POOL4C_THREAD_POOL_H
typedef struct thread_pool_t thread_pool_t;


/*创建线程池*/
thread_pool_t *thread_pool_create(int min_thr_num, int max_thr_num, int queue_max_size);
/*释放线程池*/
int thread_pool_free(thread_pool_t *pool);
/*销毁线程池*/
int thread_pool_destroy(thread_pool_t *pool);
/*管理线程*/
void *admin_thread(void *thread_pool);
/*线程是否存在*/
//int is_thread_alive(pthread_t tid);
/*工作线程*/
void *thread_pool_thread(void *thread_pool);
/*向线程池的任务队列中添加一个任务*/
int thread_pool_add_task(thread_pool_t *pool, void *(*function)(void *arg), void *arg);

#endif //THREAD_POOL4C_THREAD_POOL_H
