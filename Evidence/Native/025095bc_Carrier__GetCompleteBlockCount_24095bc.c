/* IL2CPP: Carrier$$GetCompleteBlockCount
int32_t Carrier__GetCompleteBlockCount (Carrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$GetCompleteBlockCount
   int32_t Carrier__GetCompleteBlockCount (Carrier_o* __this, const MethodInfo* method); */

int Carrier__GetCompleteBlockCount_24095bc(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x168);
  if (*(int *)(param_1 + 0x1bc) < 1) {
    if (lVar2 == 0) goto LAB_025095f0;
    iVar1 = *(int *)(lVar2 + 0x15c);
  }
  else {
    if (lVar2 == 0) {
LAB_025095f0:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    iVar1 = *(int *)(lVar2 + 0x154) * *(int *)(param_1 + 0x1bc);
  }
  return iVar1;
}

