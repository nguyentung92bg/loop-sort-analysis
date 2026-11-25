/* IL2CPP: NotificationModule$$HandleLastRespondedNotification
void NotificationModule__HandleLastRespondedNotification (NotificationModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NotificationModule$$HandleLastRespondedNotification
   void NotificationModule__HandleLastRespondedNotification (NotificationModule_o* __this, const
   MethodInfo* method); */

void NotificationModule__HandleLastRespondedNotification_254c8b0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong auStack_200 [26];
  undefined1 auStack_130 [208];
  
  puVar2 = PTR_DAT_049caa60;
  if ((bRam0000000004f4c053 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b44e8);
    FUN_021f03f8(PTR_DAT_049caa68);
    FUN_021f03f8(PTR_DAT_049caa70);
    FUN_021f03f8(PTR_DAT_049caa60);
    FUN_021f03f8(PTR_DAT_049caa78);
    bRam0000000004f4c053 = 1;
  }
  func_0x04608670(auStack_130,0,0xd0);
  lVar6 = *(long *)(*(long *)puVar2 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02229718();
  }
  pcVar7 = (char *)thunk_FUN_0224e54c(param_1 + 0x10,
                                      *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x80)
                                     );
  if (*pcVar7 != '\0') {
    System_Nullable___Il2CppFullySharedGenericStructType___get_Value_2903d64
              (param_1 + 0x10,auStack_200,*(undefined8 *)PTR_DAT_049caa78);
    func_0x04608620(auStack_130,auStack_200,0xd0);
    uVar8 = Unity_Notifications_Notification__get_Data_3a03d08(auStack_130,0);
    uVar9 = System_String__IsNullOrEmpty_2f7c924(uVar8,0);
    if ((uVar9 & 1) == 0) {
      lVar6 = Unity_Notifications_Notification__get_Data_3a03d08(auStack_130,0);
      if ((lVar6 == 0) ||
         (lVar6 = System_String__Split_2f802dc(lVar6,0x3a,0,0), puVar5 = PTR_DAT_049caa70,
         puVar4 = PTR_DAT_049caa68, puVar3 = PTR_DAT_049b44e8, puVar2 = PTR_DAT_049b3bd0, lVar6 == 0
         )) {
LAB_0264caf8:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (0 < (int)uVar1) {
        uVar12 = 0;
        do {
          if (uVar1 <= uVar12) {
LAB_0264cafc:
                    /* WARNING: Subroutine does not return */
            FUN_021f06a8();
          }
          lVar10 = *(long *)(lVar6 + (long)(int)uVar12 * 8 + 0x20);
          if ((lVar10 == 0) || (lVar10 = System_String__Split_2f802dc(lVar10,0x2c,0,0), lVar10 == 0)
             ) goto LAB_0264caf8;
          if (*(long *)(lVar10 + 0x18) != 0) {
            if ((int)*(long *)(lVar10 + 0x18) == 0) goto LAB_0264cafc;
            uVar8 = *(undefined8 *)(lVar10 + 0x20);
            if (*(int *)(*(long *)(puVar2 + 0x98) + 0xe4) == 0) {
              FUN_021f0574();
            }
            System_Enum__Parse___Il2CppFullySharedGenericStructType__25d81d0
                      (uVar8,1,auStack_200,*(undefined8 *)puVar4);
            uVar9 = auStack_200[0] & 0xffffffff;
            if (*(int *)(lVar10 + 0x18) < 2) {
              lVar10 = 0;
            }
            else {
              uVar8 = *(undefined8 *)(lVar10 + 0x28);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                FUN_021f0574();
              }
              uVar11 = System_Globalization_CultureInfo__get_InvariantCulture_307b9dc(0);
              lVar10 = System_Int32__Parse_30fbf68(uVar8,uVar11,0);
            }
            if (*(long *)(param_1 + 0xf0) == 0) goto LAB_0264caf8;
            auStack_200[0] = uVar9 | lVar10 << 0x20;
            FUN_02333498(*(long *)(param_1 + 0xf0),auStack_200,*(undefined8 *)puVar5);
          }
          uVar1 = *(uint *)(lVar6 + 0x18);
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)uVar1);
      }
    }
  }
  return;
}

