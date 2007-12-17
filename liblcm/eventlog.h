#ifndef _LCM_EVENTLOG_H_
#define _LCM_EVENTLOG_H_

#include <stdio.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct
{
    FILE *f;
    int64_t eventcount;
} lcm_eventlog_t;

typedef struct
{
    int64_t eventnum, timestamp;
    int32_t channellen, datalen;

    char     *channel;
    char     *data;
} lcm_eventlog_event_t;

// mode must be "r" or "w"
lcm_eventlog_t *lcm_eventlog_create(const char *path, const char *mode);

// read the next event; free the returned structure with log_free_event
lcm_eventlog_event_t *lcm_eventlog_read_next_event(lcm_eventlog_t *l);
void lcm_eventlog_free_event(lcm_eventlog_event_t *le);

// seek (approximately) to particular timestamp
int lcm_eventlog_seek_to_timestamp(lcm_eventlog_t *log, int64_t time);

// eventnum will be filled in for you
int lcm_eventlog_write_event(lcm_eventlog_t *log, lcm_eventlog_event_t *le);

// when you're done with the log, clean up after yourself!
void lcm_eventlog_destroy(lcm_eventlog_t *log);

#ifdef __cplusplus
}
#endif

#endif