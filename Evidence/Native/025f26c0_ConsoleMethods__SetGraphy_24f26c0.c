/* IL2CPP: ConsoleMethods$$SetGraphy
void ConsoleMethods__SetGraphy (bool state, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConsoleMethods$$SetGraphy
   void ConsoleMethods__SetGraphy (bool state, const MethodInfo* method); */

void ConsoleMethods__SetGraphy_24f26c0(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long alStack_48 [2];
  
  puVar1 = PTR_DAT_049c8238;
  if ((bRam0000000004f4bcfb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8240);
    FUN_021f03f8(PTR_DAT_049c8238);
    bRam0000000004f4bcfb = 1;
  }
  puVar2 = PTR_DAT_049c8240;
  if ((param_1 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    lVar7 = Tayx_Graphy_Utils_G_Singleton_object___get_Instance_2893bf0(*(undefined8 *)puVar2);
    if (lVar7 != 0) {
      uVar8 = 0;
      if (*(char *)(lVar7 + 0x119) == '\0') {
        return;
      }
      if (*(long *)(lVar7 + 0x120) != 0) {
        Tayx_Graphy_Fps_G_FpsManager__SetState_37ae4a0(*(long *)(lVar7 + 0x120),4,0);
        uVar8 = extraout_x1;
        if (*(long *)(lVar7 + 0x128) != 0) {
          Tayx_Graphy_Ram_G_RamManager__SetState_37aea5c(*(long *)(lVar7 + 0x128),4,0);
          uVar8 = extraout_x1_00;
          if (*(long *)(lVar7 + 0x130) != 0) {
            Tayx_Graphy_Audio_G_AudioManager__SetState_37aeef4(*(long *)(lVar7 + 0x130),4,0);
            uVar8 = extraout_x1_01;
            if (*(long *)(lVar7 + 0x138) != 0) {
              Tayx_Graphy_Advanced_G_AdvancedData__SetState_37af3d0(*(long *)(lVar7 + 0x138),4,0);
              *(undefined1 *)(lVar7 + 0x119) = 0;
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0(0,uVar8);
    }
LAB_025f275c:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar7 = Tayx_Graphy_Utils_G_Singleton_object___get_Instance_2893bf0(*(undefined8 *)puVar2);
  if (lVar7 == 0) goto LAB_025f275c;
  if (*(char *)(lVar7 + 0x119) != '\0') {
    return;
  }
  if (*(char *)(lVar7 + 0x118) != '\0') {
    lVar9 = *(long *)(lVar7 + 0x120);
    if (lVar9 != 0) {
      Tayx_Graphy_Fps_G_FpsManager__SetState_37ae4a0(lVar9,*(undefined4 *)(lVar9 + 0x70),0);
      lVar9 = *(long *)(lVar7 + 0x128);
      if (lVar9 != 0) {
        Tayx_Graphy_Ram_G_RamManager__SetState_37aea5c(lVar9,*(undefined4 *)(lVar9 + 0x60),0);
        lVar9 = *(long *)(lVar7 + 0x130);
        if (lVar9 != 0) {
          Tayx_Graphy_Audio_G_AudioManager__SetState_37aeef4(lVar9,*(undefined4 *)(lVar9 + 0x70),0);
          lVar9 = *(long *)(lVar7 + 0x138);
          if (lVar9 != 0) {
            Tayx_Graphy_Advanced_G_AdvancedData__SetState_37af3d0
                      (lVar9,*(undefined4 *)(lVar9 + 0xa0),0);
            *(undefined1 *)(lVar7 + 0x119) = 1;
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f533ff & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a10b10,0);
    FUN_021f03f8(PTR_DAT_04a10b18);
    FUN_021f03f8(PTR_DAT_04a10b20);
    FUN_021f03f8(PTR_DAT_04a10b28);
    FUN_021f03f8(PTR_DAT_04a10b30);
    FUN_021f03f8(PTR_DAT_04a10b38);
    FUN_021f03f8(PTR_DAT_04a10b40);
    FUN_021f03f8(PTR_DAT_049cbef8);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f533ff = 1;
  }
  if (*(char *)(lVar7 + 0x25) != '\0') {
    lVar9 = UnityEngine_Component__get_transform_3c18724(lVar7,0);
    if ((lVar9 == 0) ||
       (lVar9 = UnityEngine_Transform__get_root_3c2ee68(lVar9,0), puVar1 = PTR_DAT_049b3b98,
       lVar9 == 0)) goto LAB_038afc18;
    uVar8 = UnityEngine_Component__get_gameObject_3c187f4(lVar9,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar1);
    }
    UnityEngine_Object__DontDestroyOnLoad_3c246bc(uVar8,0);
  }
  puVar6 = PTR_DAT_04a10b40;
  puVar5 = PTR_DAT_04a10b38;
  puVar4 = PTR_DAT_04a10b28;
  puVar3 = PTR_DAT_04a10b20;
  puVar2 = PTR_DAT_04a10b18;
  puVar1 = PTR_DAT_04a10b10;
  UnityEngine_Component__GetComponentInChildren___Il2CppFullySharedGenericType__25c1e0c
            (lVar7,1,alStack_48,*(undefined8 *)PTR_DAT_04a10b30);
  *(long *)(lVar7 + 0x140) = alStack_48[0];
  thunk_FUN_021f190c(lVar7 + 0x140);
  UnityEngine_Component__GetComponentInChildren___Il2CppFullySharedGenericType__25c1e0c
            (lVar7,1,alStack_48,*(undefined8 *)puVar6);
  *(long *)(lVar7 + 0x148) = alStack_48[0];
  thunk_FUN_021f190c(lVar7 + 0x148);
  UnityEngine_Component__GetComponentInChildren___Il2CppFullySharedGenericType__25c1e0c
            (lVar7,1,alStack_48,*(undefined8 *)puVar3);
  *(long *)(lVar7 + 0x150) = alStack_48[0];
  thunk_FUN_021f190c(lVar7 + 0x150);
  UnityEngine_Component__GetComponentInChildren___Il2CppFullySharedGenericType__25c1e0c
            (lVar7,1,alStack_48,*(undefined8 *)puVar4);
  *(long *)(lVar7 + 0x120) = alStack_48[0];
  thunk_FUN_021f190c(lVar7 + 0x120);
  UnityEngine_Component__GetComponentInChildren___Il2CppFullySharedGenericType__25c1e0c
            (lVar7,1,alStack_48,*(undefined8 *)puVar5);
  *(long *)(lVar7 + 0x128) = alStack_48[0];
  thunk_FUN_021f190c(lVar7 + 0x128);
  UnityEngine_Component__GetComponentInChildren___Il2CppFullySharedGenericType__25c1e0c
            (lVar7,1,alStack_48,*(undefined8 *)puVar2);
  *(long *)(lVar7 + 0x130) = alStack_48[0];
  thunk_FUN_021f190c(lVar7 + 0x130);
  UnityEngine_Component__GetComponentInChildren___Il2CppFullySharedGenericType__25c1e0c
            (lVar7,1,alStack_48,*(undefined8 *)puVar1);
  *(long *)(lVar7 + 0x138) = alStack_48[0];
  thunk_FUN_021f190c(lVar7 + 0x138);
  if (*(long *)(lVar7 + 0x120) != 0) {
    Tayx_Graphy_Fps_G_FpsManager__SetPosition_37adb24
              (*(undefined4 *)(lVar7 + 0x50),*(undefined4 *)(lVar7 + 0x54),*(long *)(lVar7 + 0x120),
               *(undefined4 *)(lVar7 + 0x4c));
    if (*(long *)(lVar7 + 0x128) != 0) {
      Tayx_Graphy_Ram_G_RamManager__SetPosition_37ade34
                (*(undefined4 *)(lVar7 + 0x50),*(undefined4 *)(lVar7 + 0x54),
                 *(long *)(lVar7 + 0x128),*(undefined4 *)(lVar7 + 0x4c));
      if (*(long *)(lVar7 + 0x130) != 0) {
        Tayx_Graphy_Audio_G_AudioManager__SetPosition_37ae144
                  (*(undefined4 *)(lVar7 + 0x50),*(undefined4 *)(lVar7 + 0x54),
                   *(long *)(lVar7 + 0x130),*(undefined4 *)(lVar7 + 0x4c));
        if (*(long *)(lVar7 + 0x138) != 0) {
          Tayx_Graphy_Advanced_G_AdvancedData__SetPosition_37af474
                    (*(undefined4 *)(lVar7 + 0x10c),*(undefined4 *)(lVar7 + 0x110),
                     *(long *)(lVar7 + 0x138),*(undefined4 *)(lVar7 + 0x108));
          if (*(long *)(lVar7 + 0x120) != 0) {
            Tayx_Graphy_Fps_G_FpsManager__SetState_37ae4a0
                      (*(long *)(lVar7 + 0x120),*(undefined4 *)(lVar7 + 0x58),0);
            if (*(long *)(lVar7 + 0x128) != 0) {
              Tayx_Graphy_Ram_G_RamManager__SetState_37aea5c
                        (*(long *)(lVar7 + 0x128),*(undefined4 *)(lVar7 + 0x9c),0);
              if (*(long *)(lVar7 + 0x130) != 0) {
                Tayx_Graphy_Audio_G_AudioManager__SetState_37aeef4
                          (*(long *)(lVar7 + 0x130),*(undefined4 *)(lVar7 + 0xd8),0);
                if (*(long *)(lVar7 + 0x138) != 0) {
                  Tayx_Graphy_Advanced_G_AdvancedData__SetState_37af3d0
                            (*(long *)(lVar7 + 0x138),*(undefined4 *)(lVar7 + 0x114),0);
                  if (*(char *)(lVar7 + 0x24) == '\0') {
                    Tayx_Graphy_GraphyManager__ToggleActive_37b0500(lVar7);
                    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                              (lVar7,alStack_48,*(undefined8 *)PTR_DAT_049cbef8);
                    if (alStack_48[0] == 0) goto LAB_038afc18;
                    UnityEngine_Behaviour__set_enabled_3c17eec(alStack_48[0],1,0);
                  }
                  *(undefined1 *)(lVar7 + 0x118) = 1;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_038afc18:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

