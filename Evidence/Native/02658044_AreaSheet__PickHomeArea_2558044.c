/* IL2CPP: AreaSheet$$PickHomeArea
void AreaSheet__PickHomeArea (AreaSheet_o* __this, AreaSheet_Row_o* area, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaSheet$$PickHomeArea
   void AreaSheet__PickHomeArea (AreaSheet_o* __this, AreaSheet_Row_o* area, const MethodInfo*
   method); */

void AreaSheet__PickHomeArea_2558044(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_049b5310;
  if ((bRam0000000004f4c0bd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4c0bd = 1;
  }
  lVar4 = AreaSheet__GetReachedArea_2557fac(param_1);
  if ((lVar4 == param_2) || (lVar4 == 0)) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    puVar2 = PTR_DAT_049c5aa8;
    if ((bRam0000000004f4bcb4 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049c5aa8,0);
      bRam0000000004f4bcb4 = 1;
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    PlayerPrefsInt__DeleteValue_3f0db18(&stack0xffffffffffffffd0,0);
    return;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (param_2 != 0) {
    CloudPrefsInt__Set_24e9aa8
              (*(long *)(*(long *)puVar2 + 0xb8) + 0xa0,*(undefined4 *)(param_2 + 0x20),0);
    puVar3 = PTR_DAT_049c5aa8;
    uVar1 = *(undefined4 *)(lVar4 + 0x20);
    lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
    if ((bRam0000000004f4bcb2 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049c5aa8,uVar1,0);
      bRam0000000004f4bcb2 = 1;
    }
    uStack_38 = *(undefined8 *)(lVar4 + 200);
    uStack_40 = *(undefined8 *)(lVar4 + 0xc0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    PlayerPrefsInt__Set_3f0dba4(&uStack_40,uVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

