/* IL2CPP: AreaSheet$$GetReachedArea
AreaSheet_Row_o* AreaSheet__GetReachedArea (AreaSheet_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaSheet$$GetReachedArea
   AreaSheet_Row_o* AreaSheet__GetReachedArea (AreaSheet_o* __this, const MethodInfo* method); */

void AreaSheet__GetReachedArea_2557fac(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4c0be & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4c0be = 1;
  }
  lVar3 = *(long *)puVar1;
  uStack_28 = 0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574();
    lVar3 = *(long *)puVar1;
  }
  iVar2 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar3 + 0xb8) + 0x60,0);
  uVar4 = AreaSheet__TryGetCompletedArea_2558114(param_1,iVar2 + 1,&uStack_28);
  if ((uVar4 & 1) == 0) {
    AreaSheet__GetCurrentArea_2557950(param_1);
  }
  else {
    AreaSheet__GetPreviousArea_2558444(param_1);
  }
  return;
}

