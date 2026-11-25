/* IL2CPP: SupportMonitor$$GetSystemInfoText
System_String_o* SupportMonitor__GetSystemInfoText (SupportMonitor_o* __this, System_Text_StringBuilder_o* sb, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SupportMonitor$$GetSystemInfoText
   System_String_o* SupportMonitor__GetSystemInfoText (SupportMonitor_o* __this,
   System_Text_StringBuilder_o* sb, const MethodInfo* method); */

void SupportMonitor__GetSystemInfoText_2464a8c(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_a8;
  long lStack_a0;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_48;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if ((bRam0000000004f4b962 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c51c8);
    FUN_021f03f8(PTR_DAT_049c51d0);
    FUN_021f03f8(PTR_DAT_049c51d8);
    FUN_021f03f8(PTR_DAT_049c51e0);
    FUN_021f03f8(PTR_DAT_049c51e8);
    FUN_021f03f8(PTR_DAT_049c51f0);
    FUN_021f03f8(PTR_DAT_049c51f8);
    FUN_021f03f8(PTR_DAT_049c5200);
    FUN_021f03f8(PTR_DAT_049c5208);
    FUN_021f03f8(PTR_DAT_049c5210);
    FUN_021f03f8(PTR_DAT_049c5218);
    FUN_021f03f8(PTR_DAT_049c5220);
    FUN_021f03f8(PTR_DAT_049c5228);
    FUN_021f03f8(PTR_DAT_049c5230);
    FUN_021f03f8(PTR_DAT_049c5238);
    FUN_021f03f8(PTR_DAT_049c5240);
    FUN_021f03f8(PTR_DAT_049c5248);
    FUN_021f03f8(PTR_DAT_049c5250);
    FUN_021f03f8(PTR_DAT_049c5258);
    FUN_021f03f8(PTR_DAT_049c5260);
    FUN_021f03f8(PTR_DAT_049c5268);
    FUN_021f03f8(PTR_DAT_049c5270);
    FUN_021f03f8(PTR_DAT_049c5278);
    FUN_021f03f8(PTR_DAT_049c5280);
    FUN_021f03f8(PTR_DAT_049c5288);
    bRam0000000004f4b962 = 1;
  }
  uStack_48 = 0;
  if (param_2 != (long *)0x0) {
    System_Text_StringBuilder__Clear_2f8ba20(param_2,0);
    if (*(long *)(param_1 + 0xa0) != 0) {
      AnalyticsModule__GetUserInfo_253fc84(&lStack_78,*(long *)(param_1 + 0xa0),0);
      uVar2 = UnityEngine_SystemInfo__get_deviceModel_3c2847c(0);
      uVar2 = System_String__Concat_2f72b28(*(undefined8 *)PTR_DAT_049c5238,uVar2,0);
      System_Text_StringBuilder__AppendLine_2f8c724(param_2,uVar2,0);
      uVar2 = UnityEngine_SystemInfo__get_operatingSystem_3c2801c(0);
      uVar2 = System_String__Concat_2f72b28(*(undefined8 *)PTR_DAT_049c5270,uVar2,0);
      System_Text_StringBuilder__AppendLine_2f8c724(param_2,uVar2,0);
      uVar2 = UnityEngine_SystemInfo__get_deviceUniqueIdentifier_3c282ec(0);
      uVar2 = System_String__Concat_2f72b28(*(undefined8 *)PTR_DAT_049c5268,uVar2,0);
      System_Text_StringBuilder__AppendLine_2f8c724(param_2,uVar2,0);
      uVar2 = System_String__Concat_2f72b28(*(undefined8 *)PTR_DAT_049c51e8,lStack_78,0);
      System_Text_StringBuilder__AppendLine_2f8c724(param_2,uVar2,0);
      uVar2 = System_String__Concat_2f72b28(*(undefined8 *)PTR_DAT_049c5240,uStack_70,0);
      System_Text_StringBuilder__AppendLine_2f8c724(param_2,uVar2,0);
      uVar2 = System_String__Concat_2f72b28(*(undefined8 *)PTR_DAT_049c5228,uStack_68,0);
      System_Text_StringBuilder__AppendLine_2f8c724(param_2,uVar2,0);
      uVar2 = System_String__Concat_2f72b28(*(undefined8 *)PTR_DAT_049c51f8,uStack_60,0);
      System_Text_StringBuilder__AppendLine_2f8c724(param_2,uVar2,0);
      uVar2 = System_String__Concat_2f72b28(*(undefined8 *)PTR_DAT_049c51e0,uStack_58,0);
      System_Text_StringBuilder__AppendLine_2f8c724(param_2,uVar2,0);
      uStack_34 = UnityEngine_SystemInfo__get_deviceType_3c28634(0);
      uVar2 = thunk_FUN_0222c66c(*(undefined8 *)PTR_DAT_049c51d0,&uStack_34);
      uVar2 = System_String__Format_2f73700(*(undefined8 *)PTR_DAT_049c5280,uVar2,0);
      System_Text_StringBuilder__AppendLine_2f8c724(param_2,uVar2,0);
      uVar2 = UnityEngine_SystemInfo__get_processorType_3c28134(0);
      uVar2 = System_String__Concat_2f72b28(*(undefined8 *)PTR_DAT_049c5230,uVar2,0);
      System_Text_StringBuilder__AppendLine_2f8c724(param_2,uVar2,0);
      uStack_38 = UnityEngine_SystemInfo__get_processorCount_3c2824c(0);
      puVar1 = PTR_DAT_049b3bd0;
      uVar2 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_38);
      uStack_7c = UnityEngine_SystemInfo__get_processorFrequency_3c281fc(0);
      uVar3 = thunk_FUN_0222c66c(*(undefined8 *)(puVar1 + 0x48),&uStack_7c);
      uVar2 = System_String__Format_2f7dfac(*(undefined8 *)PTR_DAT_049c5278,uVar2,uVar3,0);
      System_Text_StringBuilder__AppendLine_2f8c724(param_2,uVar2,0);
      uStack_80 = UnityEngine_SystemInfo__get_systemMemorySize_3c2829c(0);
      uVar2 = thunk_FUN_0222c66c(*(undefined8 *)(puVar1 + 0x48),&uStack_80);
      uVar2 = System_String__Format_2f73700(*(undefined8 *)PTR_DAT_049c5258,uVar2,0);
      System_Text_StringBuilder__AppendLine_2f8c724(param_2,uVar2,0);
      uVar2 = UnityEngine_SystemInfo__get_graphicsDeviceName_3c286d4(0);
      uVar2 = System_String__Concat_2f72b28(*(undefined8 *)PTR_DAT_049c5208,uVar2,0);
      System_Text_StringBuilder__AppendLine_2f8c724(param_2,uVar2,0);
      uVar2 = UnityEngine_SystemInfo__get_graphicsDeviceVendor_3c2879c(0);
      uVar2 = System_String__Concat_2f72b28(*(undefined8 *)PTR_DAT_049c5218,uVar2,0);
      System_Text_StringBuilder__AppendLine_2f8c724(param_2,uVar2,0);
      uVar2 = UnityEngine_SystemInfo__get_graphicsDeviceVersion_3c28954(0);
      uVar2 = System_String__Concat_2f72b28(*(undefined8 *)PTR_DAT_049c5248,uVar2,0);
      System_Text_StringBuilder__AppendLine_2f8c724(param_2,uVar2,0);
      uStack_84 = UnityEngine_SystemInfo__get_graphicsDeviceType_3c28904(0);
      uVar2 = thunk_FUN_0222c66c(*(undefined8 *)PTR_DAT_049c51d8,&uStack_84);
      uVar2 = System_String__Format_2f73700(*(undefined8 *)PTR_DAT_049c5288,uVar2,0);
      System_Text_StringBuilder__AppendLine_2f8c724(param_2,uVar2,0);
      uStack_88 = UnityEngine_SystemInfo__get_graphicsMemorySize_3c28684(0);
      uVar2 = thunk_FUN_0222c66c(*(undefined8 *)(puVar1 + 0x48),&uStack_88);
      uVar2 = System_String__Format_2f73700(*(undefined8 *)PTR_DAT_049c5250,uVar2,0);
      System_Text_StringBuilder__AppendLine_2f8c724(param_2,uVar2,0);
      uStack_8c = UnityEngine_SystemInfo__get_maxTextureSize_3c290f0(0);
      uVar2 = thunk_FUN_0222c66c(*(undefined8 *)(puVar1 + 0x48),&uStack_8c);
      uVar2 = System_String__Format_2f73700(*(undefined8 *)PTR_DAT_049c5200,uVar2,0);
      System_Text_StringBuilder__AppendLine_2f8c724(param_2,uVar2,0);
      uStack_90 = UnityEngine_SystemInfo__get_batteryLevel_3c27f7c(0);
      uVar2 = thunk_FUN_0222c66c(*(undefined8 *)(puVar1 + 0x78),&uStack_90);
      uStack_94 = UnityEngine_SystemInfo__get_batteryStatus_3c27fcc(0);
      uVar3 = thunk_FUN_0222c66c(*(undefined8 *)PTR_DAT_049c51c8,&uStack_94);
      uVar2 = System_String__Format_2f7dfac(*(undefined8 *)PTR_DAT_049c5210,uVar2,uVar3,0);
      System_Text_StringBuilder__AppendLine_2f8c724(param_2,uVar2,0);
      lVar4 = UnityEngine_Profiling_Profiler__GetTotalReservedMemoryLong_3c30714(0);
      lStack_78 = lVar4 + 0xfffff;
      if (-1 < lVar4) {
        lStack_78 = lVar4;
      }
      lStack_78 = lStack_78 >> 0x14;
      uVar2 = thunk_FUN_0222c66c(*(undefined8 *)(puVar1 + 0x68),&lStack_78);
      uVar2 = System_String__Format_2f73700(*(undefined8 *)PTR_DAT_049c51f0,uVar2,0);
      System_Text_StringBuilder__AppendLine_2f8c724(param_2,uVar2,0);
      lVar4 = UnityEngine_Profiling_Profiler__GetTotalAllocatedMemoryLong_3c306ec(0);
      lStack_a0 = lVar4 + 0xfffff;
      if (-1 < lVar4) {
        lStack_a0 = lVar4;
      }
      lStack_a0 = lStack_a0 >> 0x14;
      uVar2 = thunk_FUN_0222c66c(*(undefined8 *)(puVar1 + 0x68),&lStack_a0);
      uVar2 = System_String__Format_2f73700(*(undefined8 *)PTR_DAT_049c5260,uVar2,0);
      System_Text_StringBuilder__AppendLine_2f8c724(param_2,uVar2,0);
      lVar4 = UnityEngine_Profiling_Profiler__GetMonoUsedSizeLong_3c306c4(0);
      lStack_a8 = lVar4 + 0xfffff;
      if (-1 < lVar4) {
        lStack_a8 = lVar4;
      }
      lStack_a8 = lStack_a8 >> 0x14;
      uVar2 = thunk_FUN_0222c66c(*(undefined8 *)(puVar1 + 0x68),&lStack_a8);
      uVar2 = System_String__Format_2f73700(*(undefined8 *)PTR_DAT_049c5220,uVar2,0);
      System_Text_StringBuilder__AppendLine_2f8c724(param_2,uVar2,0);
      (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

