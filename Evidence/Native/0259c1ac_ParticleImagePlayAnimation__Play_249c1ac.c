/* IL2CPP: ParticleImagePlayAnimation$$Play
void ParticleImagePlayAnimation__Play (ParticleImagePlayAnimation_o* __this, UnityEngine_AnimationEvent_o* animationEvent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: ParticleImagePlayAnimation$$Play
   void ParticleImagePlayAnimation__Play (ParticleImagePlayAnimation_o* __this,
   UnityEngine_AnimationEvent_o* animationEvent, const MethodInfo* method); */

void ParticleImagePlayAnimation__Play_249c1ac(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lStack_28;
  
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar3 = AssetKits_ParticleImage_ParticleImage__get_main_32a5fe8(*(long *)(param_1 + 0x20),0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f50c19 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049f7598);
    FUN_021f03f8(PTR_DAT_049f75a0);
    bRam0000000004f50c19 = 1;
  }
  uVar4 = AssetKits_ParticleImage_ParticleImage__get_isMain_32a6154(lVar3);
  if ((((uVar4 & 1) != 0) && (lVar6 = *(long *)(lVar3 + 0xe0), lVar6 != 0)) &&
     (uVar1 = *(uint *)(lVar6 + 0x18), 0 < (int)uVar1)) {
    lVar7 = 0;
    do {
      if (uVar1 <= (uint)lVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      if (*(long *)(lVar6 + 0x20 + lVar7 * 8) == 0) goto LAB_033a7af4;
      AssetKits_ParticleImage_ParticleImage__DoPlay_32a7a0c();
      uVar1 = *(uint *)(lVar6 + 0x18);
      lVar7 = lVar7 + 1;
    } while ((int)lVar7 < (int)uVar1);
  }
  lVar6 = *(long *)(lVar3 + 0x3130);
  *(undefined4 *)(lVar3 + 0x31f0) = 0;
  *(undefined4 *)(lVar3 + 0x3204) = 0;
  *(float *)(lVar3 + 0x31fc) = 1.0 / *(float *)(lVar3 + 0x3120);
  puVar2 = PTR_DAT_049f75a0;
  if (lVar6 != 0) {
    iVar5 = 0;
    do {
      if (*(int *)(lVar6 + 0x18) <= iVar5) {
        *(int *)(lVar3 + 0x322e) = (int)_UNK_013a7e60;
        if (*(char *)(lVar3 + 0x16d) != '\0') {
          AssetKits_ParticleImage_ParticleImage__Prewarm_32a7b68(lVar3);
        }
        if (*(int *)(lVar3 + 300) == 1) {
          UnityEngine_Time__get_deltaTime_3c29670(0);
        }
        else {
          UnityEngine_Time__get_unscaledDeltaTime_3c29788(0);
        }
        AssetKits_ParticleImage_ParticleImage__Simulate_32a7c10
                  (lVar3,*(undefined1 *)(lVar3 + 0x16d));
        if (*(long *)(lVar3 + 0x3238) != 0) {
          UnityEngine_Events_UnityEvent__Invoke_3c32ba4(*(long *)(lVar3 + 0x3238),0);
          return;
        }
        break;
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (lVar6,iVar5,&lStack_28,*(undefined8 *)puVar2);
      if (lStack_28 == 0) break;
      lVar6 = *(long *)(lVar3 + 0x3130);
      iVar5 = iVar5 + 1;
      *(undefined1 *)(lStack_28 + 0x18) = 0;
    } while (lVar6 != 0);
  }
LAB_033a7af4:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

