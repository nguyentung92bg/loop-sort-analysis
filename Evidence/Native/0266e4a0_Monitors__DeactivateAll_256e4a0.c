/* IL2CPP: Monitors$$DeactivateAll
void Monitors__DeactivateAll (Monitors_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Monitors$$DeactivateAll
   void Monitors__DeactivateAll (Monitors_o* __this, const MethodInfo* method); */

void Monitors__DeactivateAll_256e4a0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4c1ae & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca6b8);
    FUN_021f03f8(PTR_DAT_049ca6c0);
    bRam0000000004f4c1ae = 1;
  }
  puVar1 = PTR_DAT_049ca6c0;
  if (*(long *)(param_1 + 0x38) == 0) {
LAB_0266e548:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  iVar3 = *(int *)(*(long *)(param_1 + 0x38) + 0x18);
  if (-1 < iVar3 + -1) {
    do {
      lVar2 = *(long *)(param_1 + 0x38);
      if (lVar2 == 0) goto LAB_0266e548;
      iVar3 = iVar3 + -1;
      if (iVar3 < *(int *)(lVar2 + 0x18)) {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (lVar2,iVar3,&uStack_28,*(undefined8 *)puVar1);
        Monitors__Deactivate_256e214(param_1,uStack_28,0);
      }
    } while (0 < iVar3);
  }
  return;
}

