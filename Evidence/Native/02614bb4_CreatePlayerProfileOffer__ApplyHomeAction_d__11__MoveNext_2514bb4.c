/* IL2CPP: CreatePlayerProfileOffer.<ApplyHomeAction>d__11$$MoveNext
void CreatePlayerProfileOffer__ApplyHomeAction_d__11__MoveNext (CreatePlayerProfileOffer__ApplyHomeAction_d__11_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CreatePlayerProfileOffer.<ApplyHomeAction>d__11$$MoveNext
   void CreatePlayerProfileOffer__ApplyHomeAction_d__11__MoveNext
   (CreatePlayerProfileOffer__ApplyHomeAction_d__11_o __this, const MethodInfo* method); */

void CreatePlayerProfileOffer__ApplyHomeAction_d__11__MoveNext_2514bb4(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  int *piVar12;
  long *plVar13;
  long lVar14;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  byte bStack_a0;
  undefined7 uStack_9f;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_38;
  int iStack_34;
  
                    /* try { // try from 02614bb8 to 02714bbb has its CatchHandler @ 02614c08 */
                    /* try { // try from 02614bbc to 02714bbf has its CatchHandler @ 02614c04 */
                    /* try { // try from 02614bc0 to 02714bc3 has its CatchHandler @ 02614c00 */
                    /* try { // try from 02614bc4 to 02714bcb has its CatchHandler @ 02614bf0 */
                    /* try { // try from 02614bcc to 02714bdf has its CatchHandler @ 02614628 */
  if ((bRam0000000004f4be0b & 1) == 0) {
                    /* catch() { ... } // from try @ 02614b6c with catch @ 02614bd8 */
                    /* try { // try from 02614be0 to 02714be7 has its CatchHandler @ 02614c54 */
    FUN_021f03f8(PTR_DAT_049c9330);
                    /* try { // try from 02614be8 to 02714c37 has its CatchHandler @ 02614628 */
                    /* catch() { ... } // from try @ 02614b00 with catch @ 02614bec */
    FUN_021f03f8(PTR_DAT_049b5460);
                    /* catch() { ... } // from try @ 02614bc4 with catch @ 02614bf0 */
                    /* catch() { ... } // from try @ 026148b8 with catch @ 02614bf4 */
                    /* catch() { ... } // from try @ 026148e8 with catch @ 02614bf8 */
    FUN_021f03f8(PTR_DAT_049c9338);
                    /* catch() { ... } // from try @ 02614914 with catch @ 02614bfc */
                    /* catch() { ... } // from try @ 02614bc0 with catch @ 02614c00 */
                    /* catch() { ... } // from try @ 02614bbc with catch @ 02614c04 */
    FUN_021f03f8(PTR_DAT_049c9340);
                    /* catch() { ... } // from try @ 02614bb8 with catch @ 02614c08 */
                    /* catch() { ... } // from try @ 02614940 with catch @ 02614c0c */
                    /* catch() { ... } // from try @ 02614968 with catch @ 02614c10 */
    FUN_021f03f8(PTR_DAT_049b5310);
                    /* catch() { ... } // from try @ 02614828 with catch @ 02614c14 */
                    /* catch() { ... } // from try @ 02614850 with catch @ 02614c18 */
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4be0b = 1;
  }
  puVar3 = PTR_DAT_049c9340;
  puVar2 = PTR_DAT_049b5310;
  puVar1 = PTR_DAT_049b5138;
  uStack_58 = 0;
                    /* try { // try from 02614c38 to 02714c3b has its CatchHandler @ 02614c40 */
  uStack_60 = 0;
                    /* catch() { ... } // from try @ 02614c38 with catch @ 02614c40 */
                    /* try { // try from 02614c44 to 02714c4b has its CatchHandler @ 02614c54 */
  lVar14 = *(long *)(param_1 + 6);
  uStack_50 = 0;
                    /* try { // try from 02614c4c to 02714c57 has its CatchHandler @ 02614628 */
  uStack_38 = 0;
  iStack_34 = 0;
  uStack_68 = 0;
                    /* catch() { ... } // from try @ 02614be0 with catch @ 02614c54
                       catch() { ... } // from try @ 02614c44 with catch @ 02614c54 */
  if (*param_1 == 0) {
    iStack_34 = param_1[8];
    param_1[8] = 0;
    *param_1 = -1;
    uStack_38 = 0;
    goto LAB_02614de4;
  }
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(lVar14 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (0 < *(int *)(*(long *)(lVar14 + 0x38) + 0x10)) {
    if (*(char *)(lVar14 + 0x30) == '\0') {
      *(undefined1 *)(lVar14 + 0x30) = 1;
    }
    else {
      lVar8 = *(long *)PTR_DAT_049b5310;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        FUN_021f0574();
        lVar8 = *(long *)puVar2;
      }
      CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
                (*(long *)(lVar8 + 0xb8) + 0x1b0,&bStack_a0,*(undefined8 *)PTR_DAT_049b5460);
      if ((bStack_a0 & 1) == 0) {
        if (*(long *)(lVar14 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar8 = *(long *)puVar2;
        iVar7 = *(int *)(*(long *)(lVar14 + 0x38) + 0x10);
        if (*(int *)(lVar8 + 0xe4) == 0) {
          FUN_021f0574();
          lVar8 = *(long *)puVar2;
        }
        iVar5 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar8 + 0xb8) + 0x60,0);
        if ((iVar7 <= iVar5 + 1) && (*(char *)(lVar14 + 0x31) == '\0')) {
          *(undefined1 *)(lVar14 + 0x31) = 1;
          if (*(long *)(lVar14 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          uVar9 = PlayerModule__CanUpdatePlayerProfile_2551a3c(*(long *)(lVar14 + 0x20),0);
          if ((uVar9 & 1) != 0) {
            if (*(long *)(lVar14 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            lVar8 = Monitors__Get_object__26889d0
                              (*(long *)(lVar14 + 0x10),*(undefined8 *)PTR_DAT_049c9338);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            ProfileEditMonitor__ShowCreateProfile_2454a10(lVar8,0);
            while( true ) {
              if (*(long *)(lVar14 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              uVar9 = Monitors__IsActive_object__2688ab4
                                (*(long *)(lVar14 + 0x10),*(undefined8 *)puVar3);
              puVar2 = PTR_DAT_049b5310;
              if ((uVar9 & 1) == 0) break;
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                FUN_021f0574();
              }
              uVar6 = Cysharp_Threading_Tasks_UniTask__Yield_37c7ff4(0);
              _uStack_38 = CONCAT44(iStack_34,uVar6);
              iVar7 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter_37d3d44(&uStack_38,0);
              iStack_34 = iVar7;
              uVar9 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted_37d3d4c
                                (&iStack_34,0);
              puVar2 = PTR_DAT_049c9330;
              if ((uVar9 & 1) == 0) {
                *param_1 = 0;
                uVar11 = *(undefined8 *)puVar2;
                param_1[8] = iStack_34;
                FUN_0235c25c(param_1 + 2,&iStack_34,param_1,uVar11);
                return;
              }
LAB_02614de4:
              Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult_37d3d54(&iStack_34,0);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
            }
            lVar8 = *(long *)PTR_DAT_049b5310;
            if (*(int *)(lVar8 + 0xe4) == 0) {
              FUN_021f0574();
              lVar8 = *(long *)puVar2;
            }
            CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
                      (*(long *)(lVar8 + 0xb8) + 0x1b0,&bStack_a0,*(undefined8 *)PTR_DAT_049b5460);
            if ((bStack_a0 & 1) == 0) {
              CreatePlayerProfileOffer__CreateRandomProfile_25149a8(&bStack_a0,lVar14);
              uStack_60 = CONCAT71(uStack_9f,bStack_a0);
              uStack_58 = uStack_98;
              uStack_50 = uStack_90;
              if (*(long *)(lVar14 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              uStack_b8 = uStack_98;
              uStack_b0 = uStack_90;
              PlayerModule__UpdatePlayerProfile_2551b84
                        (&bStack_a0,*(long *)(lVar14 + 0x20),auStack_c0,0,0);
            }
          }
        }
      }
    }
  }
  cVar4 = cRam0000000004f49bfa;
  *param_1 = -2;
  if (cVar4 == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar13 = *(long **)(param_1 + 2);
  if (plVar13 != (long *)0x0) {
    lVar14 = *plVar13;
    uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar9 != 0) {
      piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_02614f44;
        }
        uVar9 = uVar9 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar9 != 0);
    }
    puVar10 = (undefined8 *)FUN_02229a4c(plVar13,*(long *)PTR_DAT_049b56d0,2);
LAB_02614f44:
    (*(code *)*puVar10)(plVar13,puVar10[1]);
  }
  return;
}

