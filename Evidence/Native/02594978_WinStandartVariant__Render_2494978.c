/* IL2CPP: WinStandartVariant$$Render
void WinStandartVariant__Render (WinStandartVariant_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x03266358) */
/* WARNING: Removing unreachable block (ram,0x03266388) */
/* WARNING: Removing unreachable block (ram,0x03266390) */
/* IL2CPP: WinStandartVariant$$Render
   void WinStandartVariant__Render (WinStandartVariant_o* __this, const MethodInfo* method); */

void WinStandartVariant__Render_2494978(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lStack_90;
  undefined8 uStack_88;
  undefined4 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  uVar9 = UnityEngine_Input__GetMouseButtonDown_3c7aeb4(0,0);
  if (((uVar9 & 1) == 0) || (lVar10 = *(long *)(param_1 + 0xc0), lVar10 == 0)) {
    return;
  }
  System_Threading_CancellationTokenSource__ThrowIfDisposed_31655f4(lVar10,0);
  iVar7 = *(int *)(lVar10 + 0x20);
  thunk_FUN_021fe478();
  if (iVar7 < 2) {
    thunk_FUN_021fe478();
    iVar7 = System_Threading_Interlocked__CompareExchange_316f2f0((int *)(lVar10 + 0x20),2,1,0);
    if (iVar7 == 1) {
      lVar14 = *(long *)(lVar10 + 0x38);
      thunk_FUN_021fe478();
      if (lVar14 != 0) {
        System_Threading_Timer__Dispose_3174208(lVar14,0);
      }
      uVar8 = System_Environment__get_CurrentManagedThreadId_3145c3c(0);
      thunk_FUN_021fe478();
      lVar14 = *(long *)(lVar10 + 0x10);
      *(undefined4 *)(lVar10 + 0x24) = uVar8;
      thunk_FUN_021fe478();
      if (lVar14 != 0) {
        System_Threading_EventWaitHandle__Set_3163ed0(lVar14);
      }
      if ((bRam0000000004f500bc & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049efef0);
        FUN_021f03f8(PTR_DAT_049efef8);
        FUN_021f03f8(PTR_DAT_049c1060);
        FUN_021f03f8(PTR_DAT_049eff00);
        FUN_021f03f8(PTR_DAT_049eff08);
        FUN_021f03f8(PTR_DAT_049eff10);
        FUN_021f03f8(PTR_DAT_049eff18);
        FUN_021f03f8(PTR_DAT_049efdd0);
        bRam0000000004f500bc = 1;
      }
      lVar14 = *(long *)(lVar10 + 0x18);
      lStack_70 = 0;
      uStack_68 = 0;
      uStack_78 = 0;
      thunk_FUN_021fe478();
      puVar6 = PTR_DAT_049eff10;
      puVar5 = PTR_DAT_049eff00;
      puVar4 = PTR_DAT_049efef8;
      puVar3 = PTR_DAT_049efef0;
      puVar2 = PTR_DAT_049efdd0;
      puVar1 = PTR_DAT_049c1060;
      if (lVar14 == 0) {
        thunk_FUN_021fe478();
        FUN_02311750(3,lVar10 + 0x20,0);
        DataMemoryBarrier(2,3);
        return;
      }
      if (0 < (int)*(ulong *)(lVar14 + 0x18)) {
        uVar9 = 0;
        uVar13 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
        do {
          if (uVar13 <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a8();
          }
          lVar15 = *(long *)(lVar14 + 0x20 + uVar9 * 8);
          thunk_FUN_021fe478();
          if (lVar15 != 0) {
            for (lVar15 = System_Threading_SparselyPopulatedArray_object___get_Tail_2999d68
                                    (lVar15,*(undefined8 *)PTR_DAT_049eff18); lVar15 != 0;
                lVar15 = System_Threading_SparselyPopulatedArrayFragment_object___get_Prev_2999c5c
                                   (lVar15,*(undefined8 *)puVar6)) {
              iVar7 = System_Threading_SparselyPopulatedArrayFragment_object___get_Length_2999c44
                                (lVar15,*(undefined8 *)PTR_DAT_049eff08);
              if (-1 < iVar7 + -1) {
                do {
                  iVar7 = iVar7 + -1;
                  uVar11 = System_Threading_SparselyPopulatedArrayFragment_object___get_Item_2999c0c
                                     (lVar15,iVar7,*(undefined8 *)puVar5);
                  thunk_FUN_021fe478();
                  *(undefined8 *)(lVar10 + 0x30) = uVar11;
                  thunk_FUN_021f190c(lVar10 + 0x30,uVar11);
                  lVar16 = *(long *)(lVar10 + 0x30);
                  thunk_FUN_021fe478();
                  if (lVar16 != 0) {
                    lStack_70 = lVar15;
                    thunk_FUN_021f190c(&lStack_70,lVar15);
                    plVar17 = *(long **)(lVar10 + 0x30);
                    uStack_68 = CONCAT44(uStack_68._4_4_,iVar7);
                    thunk_FUN_021fe478();
                    if ((plVar17 == (long *)0x0) || (*plVar17 != *(long *)puVar2)) {
                      System_Threading_CancellationTokenSource__CancellationCallbackCoreWork_31664e4
                                (lVar10,lStack_70,uStack_68);
                    }
                    else {
                      plVar17 = (long *)plVar17[6];
                      uVar11 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
                      System_Threading_SendOrPostCallback___ctor_3162560
                                (uVar11,lVar10,*(undefined8 *)puVar4);
                      uStack_88 = uStack_68;
                      lStack_90 = lStack_70;
                      uVar12 = thunk_FUN_0222c66c(*(undefined8 *)puVar3,&lStack_90);
                      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_021f06a0();
                      }
                      (**(code **)(*plVar17 + 0x178))
                                (plVar17,uVar11,uVar12,*(undefined8 *)(*plVar17 + 0x180));
                      uVar8 = System_Environment__get_CurrentManagedThreadId_3145c3c(0);
                      thunk_FUN_021fe478();
                      *(undefined4 *)(lVar10 + 0x24) = uVar8;
                    }
                  }
                } while (0 < iVar7);
              }
            }
          }
          uVar13 = (ulong)*(uint *)(lVar14 + 0x18);
          uVar9 = uVar9 + 1;
        } while ((long)uVar9 < (long)(int)*(uint *)(lVar14 + 0x18));
      }
      thunk_FUN_021fe478();
      *(undefined4 *)(lVar10 + 0x20) = 3;
      thunk_FUN_021fe478();
      *(undefined8 *)(lVar10 + 0x30) = 0;
      thunk_FUN_021f190c((undefined8 *)(lVar10 + 0x30),0);
      System_Threading_Interlocked__MemoryBarrier_3172bac(0);
      return;
    }
  }
  return;
}

