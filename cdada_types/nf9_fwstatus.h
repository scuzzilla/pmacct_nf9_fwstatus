#ifndef NF9_FWSTATUS
#define NF9_FWSTATUS

/* Data structures */
typedef struct {
  size_t decimal;
  char description[50];
} __attribute__((packed)) nf9_fwstatus;

#endif