/* IL2CPP: AudioModule$$Initialize
void AudioModule__Initialize (AudioModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: AudioModule$$Initialize
   void AudioModule__Initialize (AudioModule_o* __this, const MethodInfo* method); */

void AudioModule__Initialize_253020c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lStack_48;
  
  puVar4 = PTR_DAT_049c9eb0;
  puVar2 = PTR_DAT_049b3b98;
  puVar1 = PTR_DAT_049b3b90;
                    /* try { // try from 02630234 to 0273023b has its CatchHandler @ 026302f4 */
  if ((bRam0000000004f4bf15 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9eb8);
                    /* try { // try from 02630254 to 0273029f has its CatchHandler @ 026302fc */
    FUN_021f03f8(PTR_DAT_049c9ec0);
    FUN_021f03f8(PTR_DAT_049b3b90);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049b4c10);
    FUN_021f03f8(PTR_DAT_049c9eb0);
    FUN_021f03f8(PTR_DAT_049c9ec8);
                    /* try { // try from 026302a0 to 027302bb has its CatchHandler @ 02630178 */
    bRam0000000004f4bf15 = 1;
  }
  puVar5 = PTR_DAT_049c9eb8;
  puVar3 = PTR_DAT_049b4c10;
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
                    /* try { // try from 026302bc to 027302cb has its CatchHandler @ 026302f8 */
  UnityEngine_GameObject___ctor_3c1db70(uVar6,*(undefined8 *)puVar4,0);
                    /* try { // try from 026302cc to 0273030f has its CatchHandler @ 02630178 */
  puVar10 = (undefined8 *)(param_1 + 0x18);
  *puVar10 = uVar6;
  thunk_FUN_021f190c(puVar10,uVar6);
  uVar6 = *puVar10;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02630234 with catch @ 026302f4
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026302bc with catch @ 026302f8
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02630254 with catch @ 026302fc
                        */
  UnityEngine_Object__DontDestroyOnLoad_3c246bc(uVar6,0);
  plVar7 = (long *)FUN_021f04e4(*(undefined8 *)puVar3,1);
                    /* try { // try from 02630310 to 02730313 has its CatchHandler @ 0263032c */
                    /* try { // try from 02630314 to 0273032f has its CatchHandler @ 02630178 */
  uVar6 = *(undefined8 *)puVar5;
  if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 02630310 with catch @ 0263032c */
    FUN_021f0574(*(long *)(PTR_DAT_049b3bd0 + 0xe0));
  }
                    /* try { // try from 02630330 to 02730337 has its CatchHandler @ 02630340 */
                    /* try { // try from 02630338 to 02730343 has its CatchHandler @ 02630178 */
  lVar8 = System_Type__GetTypeFromHandle_310ebfc(uVar6,0);
  if (plVar7 != (long *)0x0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02630330 with catch @ 02630340
                        */
    if ((lVar8 != 0) &&
       (lVar9 = thunk_FUN_0222c938(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
      uVar6 = thunk_FUN_0223a53c();
                    /* WARNING: Subroutine does not return */
      FUN_021f0564(uVar6,0);
    }
    puVar2 = PTR_DAT_049c9ec8;
    if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
    plVar7[4] = lVar8;
    thunk_FUN_021f190c(plVar7 + 4,lVar8);
    lVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
    UnityEngine_GameObject___ctor_3c1ddb4(lVar8,*(undefined8 *)puVar2,plVar7,0);
    UnityEngine_Object__DontDestroyOnLoad_3c246bc(lVar8,0);
    if (lVar8 != 0) {
      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                (lVar8,&lStack_48,*(undefined8 *)PTR_DAT_049c9ec0);
      plVar7 = (long *)(param_1 + 0x20);
      *plVar7 = lStack_48;
      thunk_FUN_021f190c(plVar7);
      if (*plVar7 != 0) {
        UnityEngine_AudioSource__set_loop_3bbd438(*plVar7,1,0);
        if (*plVar7 != 0) {
          UnityEngine_AudioSource__set_playOnAwake_3bbd5c0(*plVar7,0,0);
          if (*plVar7 != 0) {
            UnityEngine_AudioSource__set_volume_3bbce58(_UNK_013aa810,*plVar7,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

