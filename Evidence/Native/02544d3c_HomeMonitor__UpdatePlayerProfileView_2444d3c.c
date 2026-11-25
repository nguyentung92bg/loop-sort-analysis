/* IL2CPP: HomeMonitor$$UpdatePlayerProfileView
void HomeMonitor__UpdatePlayerProfileView (HomeMonitor_o* __this, PlayerProfile_o profile, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor$$UpdatePlayerProfileView
   void HomeMonitor__UpdatePlayerProfileView (HomeMonitor_o* __this, PlayerProfile_o profile, const
   MethodInfo* method); */

void HomeMonitor__UpdatePlayerProfileView_2444d3c(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000004f4b85f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2ee0);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c4220);
    bRam0000000004f4b85f = 1;
  }
  lVar2 = StatefulUISupport_Scripts_Components_StatefulView__GetImage_335188c(param_1,0xbd13b84d,0);
  if (lVar2 != 0) {
    UnityEngine_Behaviour__set_enabled_3c17eec(lVar2,0,0);
    lVar3 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                      (param_1,0xbd13b84d,0);
    if ((lVar3 != 0) &&
       (UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                  (lVar3,&lStack_38,*(undefined8 *)PTR_DAT_049c2ee0), lStack_38 != 0)) {
      UnityEngine_Behaviour__set_enabled_3c17eec(lStack_38,0,0);
      puVar1 = PTR_DAT_049b3b98;
      if (*(long *)(param_1 + 0x1a0) != 0) {
        if (*(char *)(*(long *)(param_1 + 0x1a0) + 0x10) != '\0') {
          if (*(long *)(param_1 + 0xf8) == 0) goto LAB_02544f2c;
          uStack_48 = param_2[1];
          uStack_50 = *param_2;
          uStack_40 = param_2[2];
          uVar4 = Avatars__GetProfileAvatarSkeleton_256fecc(*(long *)(param_1 + 0xf8),&uStack_50,0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            FUN_021f0574(*(long *)puVar1);
          }
          uVar5 = UnityEngine_Object__op_Inequality_3c1b96c(uVar4,0,0);
          if ((uVar5 & 1) != 0) {
            UnityEngine_Behaviour__set_enabled_3c17eec(lStack_38,1,0);
            *(undefined8 *)(lStack_38 + 0xd8) = uVar4;
            thunk_FUN_021f190c((undefined8 *)(lStack_38 + 0xd8),uVar4);
            *(undefined8 *)(lStack_38 + 0x118) = *(undefined8 *)PTR_DAT_049c4220;
            thunk_FUN_021f190c(lStack_38 + 0x118);
            *(undefined1 *)(lStack_38 + 0x120) = 1;
            lVar2 = Spine_Unity_SkeletonGraphic__get_AnimationState_331b0d0(lStack_38,0);
            uVar4 = Spine_Unity_SkeletonGraphic__get_Skeleton_330f3c0(lStack_38,0);
            if (lVar2 != 0) {
              Spine_AnimationState__Apply_32d185c(lVar2,uVar4,0);
              return;
            }
            goto LAB_02544f2c;
          }
        }
        UnityEngine_Behaviour__set_enabled_3c17eec(lVar2,1,0);
        if (*(long *)(param_1 + 0xf8) != 0) {
          uStack_68 = param_2[1];
          uStack_70 = *param_2;
          uStack_60 = param_2[2];
          uVar4 = Avatars__GetProfileAvatar_256fe34(*(long *)(param_1 + 0xf8),&uStack_70,0);
          UnityEngine_UI_Image__set_sprite_3cee6e8(lVar2,uVar4,0);
          return;
        }
      }
    }
  }
LAB_02544f2c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

