/* IL2CPP: HomeSceneDisc$$.cctor
void HomeSceneDisc___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneDisc$$.cctor
   void HomeSceneDisc___cctor (const MethodInfo* method); */

void HomeSceneDisc___cctor_24200dc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  puVar3 = PTR_DAT_049c2fe8;
  puVar2 = PTR_DAT_049c2fe0;
  puVar1 = PTR_DAT_049be640;
  if ((bRam0000000004f4b77a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2fe0);
    FUN_021f03f8(PTR_DAT_049be640);
    FUN_021f03f8(PTR_DAT_049c2ff0);
    FUN_021f03f8(PTR_DAT_049c2fe8);
    bRam0000000004f4b77a = 1;
  }
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar3,0);
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar4;
  thunk_FUN_021f190c(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar4);
  lVar5 = FUN_021f04e4(*(undefined8 *)puVar1,4);
  if (lVar5 != 0) {
    if ((1 < *(uint *)(lVar5 + 0x18)) &&
       (*(undefined4 *)(lVar5 + 0x24) = 0x3f800000, puVar3 = PTR_DAT_049c2ff0,
       *(uint *)(lVar5 + 0x18) != 2)) {
      lVar6 = *(long *)(*(long *)puVar2 + 0xb8);
      *(undefined4 *)(lVar5 + 0x28) = 0x3f800000;
      *(long *)(lVar6 + 8) = lVar5;
      thunk_FUN_021f190c();
      uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,4);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
                (uVar4,*(undefined8 *)puVar3,0);
      puVar7 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
      *puVar7 = uVar4;
      thunk_FUN_021f190c(puVar7,uVar4);
      lVar5 = FUN_021f04e4(*(undefined8 *)puVar1,4);
      if (lVar5 == 0) goto LAB_02520250;
      if ((1 < *(uint *)(lVar5 + 0x18)) &&
         (*(undefined4 *)(lVar5 + 0x24) = 0x3f51eb85, *(uint *)(lVar5 + 0x18) != 2)) {
        lVar6 = *(long *)puVar2;
        *(undefined4 *)(lVar5 + 0x28) = 0x3f51eb85;
        plVar8 = (long *)(*(long *)(lVar6 + 0xb8) + 0x18);
        *plVar8 = lVar5;
        if (iRam0000000005174518 != 0) {
          FUN_023118d0(1L << ((ulong)plVar8 >> 0xc & 0x3f),
                       ((ulong)plVar8 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
        }
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a8();
  }
LAB_02520250:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

