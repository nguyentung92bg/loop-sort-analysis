/* IL2CPP: AudioPlayer$$Play
void AudioPlayer__Play (AudioPlayer_o __this, UnityEngine_AudioClip_o* clip, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AudioPlayer$$Play
   void AudioPlayer__Play (AudioPlayer_o __this, UnityEngine_AudioClip_o* clip, const MethodInfo*
   method); */

void AudioPlayer__Play_2530c98(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  int iVar6;
  int iStack_4c;
  undefined8 uStack_48;
  int iStack_38;
  undefined4 uStack_34;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bf1d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1b50);
    FUN_021f03f8(PTR_DAT_049bc7f8);
    FUN_021f03f8(PTR_DAT_049c9f28);
    FUN_021f03f8(PTR_DAT_049c9f30);
    FUN_021f03f8(PTR_DAT_049bc800);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bf1d = 1;
  }
  uStack_48 = 0;
  iStack_4c = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar3 = UnityEngine_Object__op_Equality_3c1eeb4(param_2,0,0);
  if (((uVar3 & 1) == 0) && ((char)param_1[1] == '\0')) {
    lVar4 = *param_1;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar3 = UnityEngine_Object__op_Equality_3c1eeb4(lVar4,0,0);
    if ((uVar3 & 1) == 0) {
      if (param_2 != 0) {
        uVar2 = UnityEngine_Object__GetInstanceID_3c22f1c(param_2,0);
        puVar1 = PTR_DAT_049c1b50;
        lVar4 = *(long *)PTR_DAT_049c1b50;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          FUN_021f0574(lVar4);
          lVar4 = *(long *)puVar1;
        }
        if (**(long **)(lVar4 + 0xb8) != 0) {
          uStack_34 = uVar2;
          uVar3 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                            (**(long **)(lVar4 + 0xb8),&uStack_34,(long)&uStack_48 + 4,
                             *(undefined8 *)PTR_DAT_049bc7f8);
          if ((uVar3 & 1) != 0) {
            fVar5 = (float)UnityEngine_Time__get_time_3c295c8(0);
            fVar5 = fVar5 - uStack_48._4_4_;
            if (fVar5 < *(float *)((long)param_1 + 0xc)) {
              return;
            }
            lVar4 = *(long *)puVar1;
            if (*(int *)(lVar4 + 0xe4) == 0) {
              FUN_021f0574();
              lVar4 = *(long *)puVar1;
            }
            lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
            if (lVar4 == 0) goto LAB_02631044;
            uStack_34 = uVar2;
            System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (lVar4,&uStack_34,&iStack_4c,*(undefined8 *)PTR_DAT_049c9f28);
            if (*(float *)(param_1 + 2) < fVar5) {
              iStack_4c = 0;
            }
            lVar4 = *param_1;
            if (lVar4 == 0) goto LAB_02631044;
            fVar5 = (float)UnityEngine_AudioSource__get_pitch_3bbcf2c(lVar4,0);
            UnityEngine_AudioSource__set_pitch_3bbcf30
                      (fVar5 + *(float *)((long)param_1 + 0x14) * (float)iStack_4c,lVar4,0);
            lVar4 = *(long *)puVar1;
            if (*(int *)(lVar4 + 0xe4) == 0) {
              FUN_021f0574();
              lVar4 = *(long *)puVar1;
            }
            lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
            if (lVar4 == 0) goto LAB_02631044;
            iStack_38 = iStack_4c + 1;
            uStack_34 = uVar2;
            System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                      (lVar4,&uStack_34,&iStack_38,*(undefined8 *)PTR_DAT_049c9f30);
          }
          if (0.0 < *(float *)(param_1 + 3)) {
            lVar4 = *param_1;
            if (lVar4 == 0) goto LAB_02631044;
            fVar5 = (float)UnityEngine_AudioSource__get_pitch_3bbcf2c(lVar4,0);
            if (*(float *)(param_1 + 3) <= fVar5) {
              fVar5 = *(float *)(param_1 + 3);
            }
            UnityEngine_AudioSource__set_pitch_3bbcf30(fVar5,lVar4,0);
          }
          lVar4 = *(long *)puVar1;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            FUN_021f0574();
                    /* try { // try from 02630efc to 02730fef has its CatchHandler @ 02630efc
                       catch() { ... } // from try @ 02630efc with catch @ 02630efc
                       catch() { ... } // from try @ 0263105c with catch @ 02630efc
                       catch() { ... } // from try @ 02631148 with catch @ 02630efc
                       catch() { ... } // from try @ 02631188 with catch @ 02630efc
                       catch() { ... } // from try @ 026311c4 with catch @ 02630efc
                       catch() { ... } // from try @ 026311e8 with catch @ 02630efc */
            lVar4 = *(long *)puVar1;
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
          if (lVar4 != 0) {
            uStack_34 = uVar2;
            uVar3 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                              (lVar4,&uStack_34,&uStack_48,*(undefined8 *)PTR_DAT_049c9f28);
            if (((uVar3 & 1) == 0) || ((int)uStack_48 < 1)) {
              if (0 < *(int *)((long)param_1 + 0x1c)) {
                lVar4 = *(long *)puVar1;
                if (*(int *)(lVar4 + 0xe4) == 0) {
                  FUN_021f0574();
                  lVar4 = *(long *)puVar1;
                }
                lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
                if (lVar4 == 0) goto LAB_02631044;
                iStack_38 = *(int *)((long)param_1 + 0x1c);
                uStack_34 = uVar2;
                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                          (lVar4,&uStack_34,&iStack_38,*(undefined8 *)PTR_DAT_049c9f30);
              }
              lVar4 = *(long *)puVar1;
              if (*(int *)(lVar4 + 0xe4) == 0) {
                FUN_021f0574();
                lVar4 = *(long *)puVar1;
              }
              lVar4 = **(long **)(lVar4 + 0xb8);
              iVar6 = UnityEngine_Time__get_time_3c295c8(0);
                    /* try { // try from 02630ff0 to 02730ff7 has its CatchHandler @ 026311a0 */
              if (lVar4 != 0) {
                    /* try { // try from 02631010 to 0273105b has its CatchHandler @ 026311a4 */
                iStack_38 = iVar6;
                uStack_34 = uVar2;
                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                          (lVar4,&uStack_34,&iStack_38,*(undefined8 *)PTR_DAT_049bc800);
                if (*param_1 != 0) {
                  UnityEngine_AudioSource__PlayOneShot_3bbd130(*param_1,param_2,0);
                  return;
                }
              }
            }
            else {
              lVar4 = *(long *)puVar1;
              if (*(int *)(lVar4 + 0xe4) == 0) {
                FUN_021f0574();
                lVar4 = *(long *)puVar1;
              }
              lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
              if (lVar4 != 0) {
                iStack_38 = (int)uStack_48 + -1;
                uStack_34 = uVar2;
                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                          (lVar4,&uStack_34,&iStack_38,*(undefined8 *)PTR_DAT_049c9f30);
                return;
              }
            }
          }
        }
      }
LAB_02631044:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  return;
}

