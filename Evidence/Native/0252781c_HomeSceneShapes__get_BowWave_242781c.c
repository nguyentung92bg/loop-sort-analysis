/* IL2CPP: HomeSceneShapes$$get_BowWave
UnityEngine_Texture2D_o* HomeSceneShapes__get_BowWave (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneShapes$$get_BowWave
   UnityEngine_Texture2D_o* HomeSceneShapes__get_BowWave (const MethodInfo* method); */

long HomeSceneShapes__get_BowWave_242781c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_DAT_049c33b0;
  if ((bRam0000000004f4b7a7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c33b8);
    FUN_021f03f8(PTR_DAT_049c33b0);
    FUN_021f03f8(PTR_DAT_049c3440);
    FUN_021f03f8(PTR_DAT_049c33c8);
    bRam0000000004f4b7a7 = 1;
  }
  puVar2 = PTR_DAT_049c33c8;
  lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
  if (lVar5 == 0) {
    lVar5 = *(long *)PTR_DAT_049c33c8;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_021f0574();
      lVar5 = *(long *)puVar2;
    }
    puVar4 = *(undefined8 **)(lVar5 + 0xb8);
    lVar6 = puVar4[3];
    if (lVar6 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_021f0574();
        puVar4 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar7 = *puVar4;
      lVar6 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c33b8);
      System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2892ea0
                (lVar6,uVar7,*(undefined8 *)PTR_DAT_049c3440,0);
      plVar3 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
      *plVar3 = lVar6;
      thunk_FUN_021f190c(plVar3,lVar6);
    }
    lVar5 = HomeSceneShapes__Make_2428b8c(0x40,0x30,lVar6,1);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
    *plVar3 = lVar5;
    thunk_FUN_021f190c(plVar3,lVar5);
  }
  return lVar5;
}

