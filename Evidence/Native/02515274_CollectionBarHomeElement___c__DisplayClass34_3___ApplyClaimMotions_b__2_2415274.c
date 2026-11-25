/* IL2CPP: CollectionBarHomeElement.<>c__DisplayClass34_3$$<ApplyClaimMotions>b__2
void CollectionBarHomeElement___c__DisplayClass34_3___ApplyClaimMotions_b__2 (CollectionBarHomeElement___c__DisplayClass34_3_o* __this, int32_t x, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CollectionBarHomeElement.<>c__DisplayClass34_3$$<ApplyClaimMotions>b__2
   void CollectionBarHomeElement___c__DisplayClass34_3___ApplyClaimMotions_b__2
   (CollectionBarHomeElement___c__DisplayClass34_3_o* __this, int32_t x, const MethodInfo* method);
    */

void CollectionBarHomeElement___c__DisplayClass34_3___ApplyClaimMotions_b__2_2415274
               (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uStack_24;
  
  uStack_24 = param_2;
  if ((bRam0000000004f4b742 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bb3a0);
    bRam0000000004f4b742 = 1;
  }
  puVar1 = PTR_DAT_049bb3a0;
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x20);
    uVar2 = System_Int32__ToString_30fbaa0(&uStack_24,0);
    uVar3 = System_Int32__ToString_30fbaa0(param_1 + 0x10,0);
    uVar2 = System_String__Concat_2f7d424(uVar2,*(undefined8 *)puVar1,uVar3,0);
    if (lVar4 != 0) {
      StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(lVar4,0x5f7a3f9f,uVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

