/* IL2CPP: ConnectivityModule.<ReachesAsync>d__20$$MoveNext
void ConnectivityModule__ReachesAsync_d__20__MoveNext (ConnectivityModule__ReachesAsync_d__20_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConnectivityModule.<ReachesAsync>d__20$$MoveNext
   void ConnectivityModule__ReachesAsync_d__20__MoveNext (ConnectivityModule__ReachesAsync_d__20_o
   __this, const MethodInfo* method); */

void ConnectivityModule__ReachesAsync_d__20__MoveNext_25323a8(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uStack_70;
  int *piStack_68;
  int **ppiStack_60;
  undefined8 auStack_58 [2];
  int iStack_48;
  undefined1 auStack_40 [16];
  int iStack_2c;
  int *piStack_28;
  
                    /* catch() { ... } // from try @ 02632390 with catch @ 026323ac */
                    /* try { // try from 026323b0 to 027323b7 has its CatchHandler @ 026323c0 */
                    /* try { // try from 026323b8 to 027323c3 has its CatchHandler @ 026321fc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 026323b0 with catch @ 026323c0
                        */
  piStack_28 = param_1;
  if ((bRam0000000004f4bf2c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9fb8);
    FUN_021f03f8(PTR_DAT_049b5570);
    FUN_021f03f8(PTR_DAT_049b3cc8);
    FUN_021f03f8(PTR_DAT_049b7b60);
    FUN_021f03f8(PTR_DAT_049c9f80);
    bRam0000000004f4bf2c = 1;
  }
  iStack_2c = *param_1;
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  iStack_48 = 0;
  if (iStack_2c == 0) {
    piStack_68 = &iStack_2c;
    ppiStack_60 = &piStack_28;
    uStack_70 = 0;
LAB_02632500:
    auStack_40 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    iStack_2c = -1;
    *param_1 = -1;
  }
  else {
    uVar3 = UnityEngine_Networking_UnityWebRequest__Get_3f090cc(*(undefined8 *)(param_1 + 8),0);
    *(undefined8 *)(piStack_28 + 10) = uVar3;
    thunk_FUN_021f190c();
    piStack_68 = &iStack_2c;
    uStack_70 = 0;
    ppiStack_60 = &piStack_28;
    param_1 = piStack_28;
    if (iStack_2c == 0) goto LAB_02632500;
    if (*(long *)(piStack_28 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_Networking_UnityWebRequest__set_timeout_3f08fc0(*(long *)(piStack_28 + 10),5,0);
    param_1 = piStack_28;
    if (iStack_2c == 0) goto LAB_02632500;
    if (*(long *)(piStack_28 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar3 = UnityEngine_Networking_UnityWebRequest__SendWebRequest_3f0728c
                      (*(long *)(piStack_28 + 10),0);
    auStack_40 = Cysharp_Threading_Tasks_UnityAsyncExtensions__GetAwaiter_3805ed8(uVar3,0);
    uVar4 = Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter__get_IsCompleted_380c544
                      (auStack_40,0);
    if ((uVar4 & 1) == 0) {
      iStack_2c = 0;
      *piStack_28 = 0;
      *(undefined1 (*) [16])(piStack_28 + 0xc) = auStack_40;
      thunk_FUN_021f190c(piStack_28 + 0xc,0);
      FUN_0235bb44(piStack_28 + 2,auStack_40,piStack_28,*(undefined8 *)PTR_DAT_049c9fb8);
      uVar1 = 0;
      iVar2 = 6;
      goto LAB_02632604;
    }
  }
  Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter__GetResult_380c55c
            (auStack_40,0);
  if (*(long *)(piStack_28 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  iVar2 = UnityEngine_Networking_UnityWebRequest__get_result_3f07b28(*(long *)(piStack_28 + 10),0);
  lVar6 = *(long *)(piStack_28 + 10);
  if (iVar2 == 3) {
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar6 = UnityEngine_Networking_UnityWebRequest__get_responseCode_3f07b78(lVar6,0);
    uVar1 = lVar6 != 0x1ff;
    iVar2 = 10;
  }
  else {
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    iVar2 = UnityEngine_Networking_UnityWebRequest__get_result_3f07b28(lVar6,0);
    if (iVar2 == 1) {
      uVar4 = System_String__op_Equality_2f7b7fc
                        (*(undefined8 *)(piStack_28 + 8),*(undefined8 *)PTR_DAT_049c9f80,0);
      lVar6 = *(long *)(piStack_28 + 10);
      if ((uVar4 & 1) == 0) {
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar6 = UnityEngine_Networking_UnityWebRequest__get_responseCode_3f07b78(lVar6,0);
        uVar1 = lVar6 == 0xcc;
        iVar2 = 10;
        goto LAB_02632604;
      }
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar6 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler_3f071d4(lVar6,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar6 = UnityEngine_Networking_DownloadHandler__get_text_3f059c0(lVar6,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar1 = System_String__Contains_2f823f8(lVar6,*(undefined8 *)PTR_DAT_049b7b60,0);
    }
    else {
      uVar1 = 0;
    }
    iVar2 = 10;
  }
LAB_02632604:
  if ((*piStack_68 < 0) && (plVar9 = *(long **)(*ppiStack_60 + 10), plVar9 != (long *)0x0)) {
    lVar6 = *plVar9;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b3cc8) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02632674;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049b3cc8,0);
LAB_02632674:
    (*(code *)*puVar5)(plVar9,puVar5[1]);
  }
  if (uStack_70 == 0) {
    if (iVar2 == 10) {
      *piStack_28 = -2;
      piVar7 = piStack_28 + 10;
      piVar7[0] = 0;
      piVar7[1] = 0;
      thunk_FUN_021f190c(piVar7,0);
      uStack_70 = CONCAT71(uStack_70._1_7_,uVar1) & 0xffffffffffffff01;
      FUN_0235bed4(piStack_28 + 2,&uStack_70,*(undefined8 *)PTR_DAT_049b5570);
    }
    else if (iVar2 == 0) {
      uVar8 = auStack_58[iStack_48 + -1];
      *piStack_28 = -2;
      piVar7 = piStack_28 + 10;
      piVar7[0] = 0;
      piVar7[1] = 0;
      thunk_FUN_021f190c(piVar7,0);
      piVar7 = piStack_28;
      uVar3 = thunk_FUN_02256840(PTR_DAT_049b5598);
      FUN_0235bd8c(piVar7 + 2,uVar8,uVar3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f0698();
}

