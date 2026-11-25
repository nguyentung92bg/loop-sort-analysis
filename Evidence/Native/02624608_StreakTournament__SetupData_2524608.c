/* IL2CPP: StreakTournament$$SetupData
void StreakTournament__SetupData (StreakTournament_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournament$$SetupData
   void StreakTournament__SetupData (StreakTournament_o* __this, const MethodInfo* method); */

void StreakTournament__SetupData_2524608(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if ((bRam0000000004f4be8f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5b18);
    FUN_021f03f8(PTR_DAT_049c9928);
    FUN_021f03f8(PTR_DAT_049be138);
    FUN_021f03f8(PTR_DAT_049be160);
    FUN_021f03f8(PTR_DAT_049be168);
    FUN_021f03f8(PTR_DAT_049c9518);
    bRam0000000004f4be8f = 1;
  }
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x68) != 0) {
    uVar3 = RemoteConfigModule__GetDataClassNew_object__26a494c
                      (*(long *)(param_1 + 0x68),*(undefined8 *)PTR_DAT_049c9518);
    *(undefined8 *)(param_1 + 0x88) = uVar3;
    thunk_FUN_021f190c((undefined8 *)(param_1 + 0x88),uVar3);
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 0x110), lVar4 != 0)) {
      uVar2 = ConstantSheetBase_object___GetInt_281c070(lVar4,0x1e,*(undefined8 *)PTR_DAT_049c5b18);
      plVar7 = (long *)(param_1 + 0x78);
      *(undefined4 *)(param_1 + 0x80) = uVar2;
      if (*plVar7 != 0) {
        return;
      }
      if ((*(long *)(param_1 + 0x38) != 0) &&
         (lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 0x110), lVar4 != 0)) {
        lVar4 = ConstantSheetBase_object___GetString_281c118
                          (lVar4,0x1f,*(undefined8 *)PTR_DAT_049c9928);
        lVar5 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049be168);
        System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
                  (lVar5,*(undefined8 *)PTR_DAT_049be160);
        *plVar7 = lVar5;
        thunk_FUN_021f190c(plVar7,lVar5);
        if ((lVar4 != 0) &&
           (lVar4 = System_String__Split_2f802dc(lVar4,0x2c,0,0), puVar1 = PTR_DAT_049be138,
           lVar4 != 0)) {
          if ((int)*(ulong *)(lVar4 + 0x18) < 1) {
            return;
          }
          uVar8 = 0;
          uVar6 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
          do {
            if (uVar6 <= uVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a8();
            }
            uVar6 = System_Int32__TryParse_30fc1b4
                              (*(undefined8 *)(lVar4 + 0x20 + uVar8 * 8),&uStack_38,0);
            if ((uVar6 & 1) != 0) {
              if (*plVar7 == 0) break;
              uStack_34 = uStack_38;
              FUN_02333498(*plVar7,&uStack_34,*(undefined8 *)puVar1);
            }
            uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
            uVar8 = uVar8 + 1;
            if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)uVar8) {
              return;
            }
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

