/* IL2CPP: HomeSceneShapes$$get_Screen
UnityEngine_Material_o* HomeSceneShapes__get_Screen (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneShapes$$get_Screen
   UnityEngine_Material_o* HomeSceneShapes__get_Screen (const MethodInfo* method); */

undefined8 HomeSceneShapes__get_Screen_2428a54(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar2 = PTR_DAT_049c33b0;
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4b7a4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c33b0);
    FUN_021f03f8(PTR_DAT_049b89f8);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c3488);
    FUN_021f03f8(PTR_DAT_049c3490);
    bRam0000000004f4b7a4 = 1;
  }
  uVar6 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar3 = UnityEngine_Object__op_Inequality_3c1b96c(uVar6,0,0);
  if ((uVar3 & 1) == 0) {
    uVar6 = UnityEngine_Resources__Load_object__26a73fc
                      (*(undefined8 *)PTR_DAT_049c3490,*(undefined8 *)PTR_DAT_049c3488);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_021f0574(lVar5);
    }
                    /* try { // try from 02528b30 to 02628bf7 has its CatchHandler @ 02528b30
                       catch() { ... } // from try @ 02528b30 with catch @ 02528b30
                       catch() { ... } // from try @ 02528c94 with catch @ 02528b30
                       catch() { ... } // from try @ 02528ce8 with catch @ 02528b30
                       catch() { ... } // from try @ 02528d40 with catch @ 02528b30
                       catch() { ... } // from try @ 02528dfc with catch @ 02528b30
                       catch() { ... } // from try @ 02528e38 with catch @ 02528b30
                       catch() { ... } // from try @ 02528ef0 with catch @ 02528b30 */
    uVar3 = UnityEngine_Object__op_Inequality_3c1b96c(uVar6,0,0);
    uVar7 = 0;
    if ((uVar3 & 1) != 0) {
      uVar7 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b89f8);
      UnityEngine_Material___ctor_3be5d2c(uVar7,uVar6,0);
    }
    puVar4 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
    *puVar4 = uVar7;
    thunk_FUN_021f190c(puVar4,uVar7);
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
  }
  return uVar7;
}

