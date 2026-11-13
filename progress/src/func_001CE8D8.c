int func_001CE8D8(void *arg0, unsigned int arg1)
{
  int *begin = *((int **) (((char *) arg0) + 0x14));
  int end = *((int *) (((char *) arg0) + 0x18));
  unsigned int count = (unsigned int) ((end - ((int) begin)) >> 2);
  int *new_var;
  if (arg1 < count)
  {
    new_var = &begin[arg1];
    return *new_var;
  }
  return 0;
}

int func_001CE910(void *arg0, unsigned int arg1);
