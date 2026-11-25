/* IL2CPP: AnimationCompletionHandler$$OnComplete
void AnimationCompletionHandler__OnComplete (AnimationCompletionHandler_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x038d78a0) */
/* WARNING: Removing unreachable block (ram,0x038d7924) */
/* IL2CPP: AnimationCompletionHandler$$OnComplete
   void AnimationCompletionHandler__OnComplete (AnimationCompletionHandler_o* __this, const
   MethodInfo* method); */

bool AnimationCompletionHandler__OnComplete_2498968(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  char *pcStack_b0;
  undefined8 *puStack_a8;
  undefined4 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  char acStack_6c [4];
  undefined8 uStack_68;
  
  lVar6 = *(long *)(param_1 + 0x20);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f535fe & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049d1a68);
    FUN_021f03f8(PTR_DAT_049d1a70);
    FUN_021f03f8(PTR_DAT_049d1a78);
    FUN_021f03f8(PTR_DAT_049d1a80);
    FUN_021f03f8(PTR_DAT_049b8f58);
    bRam0000000004f535fe = 1;
  }
  uStack_68 = 0;
  acStack_6c[0] = '\0';
  uStack_98 = 0;
  uStack_88 = 0;
  lStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  iVar5 = System_Threading_Interlocked__CompareExchange_316f2f0(lVar6 + 0x40,1,0,0);
  if (iVar5 == 0) {
    plVar11 = (long *)(lVar6 + 0x20);
    if (*plVar11 == 0) {
      uVar7 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b8f58);
      System_Object___ctor_3142338(uVar7,0);
      System_Threading_Interlocked__CompareExchange_3172b1c(plVar11,uVar7,0,0);
    }
    uStack_68 = System_Threading_Thread__VolatileRead_316ec18(plVar11,0);
    pcStack_b0 = acStack_6c;
    acStack_6c[0] = '\0';
    lStack_b8 = 0;
    puStack_a8 = &uStack_68;
    System_Threading_Monitor__Enter_316c65c(uStack_68,acStack_6c,0);
    plVar11 = (long *)(lVar6 + 0x28);
    lVar10 = *plVar11;
    if (lVar10 != 0) {
      (**(code **)(lVar10 + 0x18))
                (*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar6 + 0x30),
                 *(undefined8 *)(lVar10 + 0x28));
    }
    plVar12 = (long *)(lVar6 + 0x38);
    if (*plVar12 != 0) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (*plVar12,&lStack_d8,*(undefined8 *)PTR_DAT_049d1a80);
      puVar4 = PTR_DAT_049d1a78;
      puVar3 = PTR_DAT_049d1a70;
      uStack_88 = uStack_d0;
      lStack_90 = lStack_d8;
      uStack_78 = uStack_c0;
      uStack_80 = uStack_c8;
      while (uVar8 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                               (&lStack_90,*(undefined8 *)puVar3), (uVar8 & 1) != 0) {
        lVar13 = *(long *)puVar4;
        lVar9 = *(long *)(lVar13 + 0x20);
        uVar2 = *(ushort *)(lVar9 + 0x135);
        lVar10 = lVar9;
        if ((uVar2 & 1) == 0) {
          lVar10 = FUN_02229718();
          lVar9 = *(long *)(lVar13 + 0x20);
          uVar2 = *(ushort *)(lVar9 + 0x135);
        }
        uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0xfc);
        if ((uVar2 & 1) == 0) {
          lVar9 = FUN_02229718();
        }
        uVar7 = thunk_FUN_0224e54c(&lStack_90,
                                   *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x60);
        func_0x04608620(&lStack_d8,uVar7,uVar1);
        if (lStack_d8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        (**(code **)(lStack_d8 + 0x18))
                  (*(undefined8 *)(lStack_d8 + 0x40),uStack_d0,*(undefined8 *)(lStack_d8 + 0x28));
      }
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&lStack_90,*(undefined8 *)PTR_DAT_049d1a68);
    }
    *plVar11 = 0;
    thunk_FUN_021f190c(plVar11,0);
    *(undefined8 *)(lVar6 + 0x30) = 0;
    thunk_FUN_021f190c((undefined8 *)(lVar6 + 0x30),0);
    *plVar12 = 0;
    thunk_FUN_021f190c(plVar12,0);
    if (*pcStack_b0 != '\0') {
      System_Threading_Monitor__Exit_316c6f0(*puStack_a8,0);
    }
    if (lStack_b8 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f0698();
    }
  }
  return iVar5 == 0;
}

