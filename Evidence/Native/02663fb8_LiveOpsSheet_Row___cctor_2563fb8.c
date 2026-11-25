/* IL2CPP: LiveOpsSheet.Row$$.cctor
void LiveOpsSheet_Row___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LiveOpsSheet.Row$$.cctor
   void LiveOpsSheet_Row___cctor (const MethodInfo* method); */

void LiveOpsSheet_Row___cctor_2563fb8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049b6128;
  if ((bRam0000000004f4c13f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cbb08);
    FUN_021f03f8(PTR_DAT_049b6128);
    bRam0000000004f4c13f = 1;
  }
  puVar2 = PTR_DAT_049cbb08;
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574();
    lVar3 = *(long *)puVar1;
  }
  uStack_30 = 0;
  uStack_28 = 0;
  System_DateTimeOffset___ctor_30e0a3c
            (&uStack_30,0x7ea,1,1,0xb,0,0,**(undefined8 **)(lVar3 + 0xb8),0);
  puVar4 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
  puVar4[1] = uStack_28;
  *puVar4 = uStack_30;
  return;
}

