/* IL2CPP: SceneRegistry$$OnGameBehaviourRented
void SceneRegistry__OnGameBehaviourRented (SceneRegistry_o* __this, GameBehaviourRentedMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SceneRegistry$$OnGameBehaviourRented
   void SceneRegistry__OnGameBehaviourRented (SceneRegistry_o* __this, GameBehaviourRentedMessage_o
   m, const MethodInfo* method); */

void SceneRegistry__OnGameBehaviourRented_2554038(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  int *piVar14;
  undefined8 uVar15;
  long *plStack_68;
  
                    /* try { // try from 02654040 to 0275404b has its CatchHandler @ 02654164 */
                    /* try { // try from 02654060 to 02754067 has its CatchHandler @ 02654160 */
  if ((bRam0000000004f4c096 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049caf90);
                    /* try { // try from 02654078 to 02754083 has its CatchHandler @ 02654158 */
    FUN_021f03f8(PTR_DAT_049caf98);
    FUN_021f03f8(PTR_DAT_049cafa0);
                    /* try { // try from 02654090 to 0275409f has its CatchHandler @ 02654154 */
    FUN_021f03f8(PTR_DAT_049cafa8);
    FUN_021f03f8(PTR_DAT_049caf80);
    FUN_021f03f8(PTR_DAT_049b4c10);
    bRam0000000004f4c096 = 1;
  }
  puVar6 = PTR_DAT_049cafa8;
  puVar5 = PTR_DAT_049cafa0;
  puVar4 = PTR_DAT_049caf98;
  puVar3 = PTR_DAT_049caf80;
  puVar2 = PTR_DAT_049b4c10;
  plStack_68 = (long *)0x0;
  if (param_2 == 0) {
LAB_026542ec:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* try { // try from 026540cc to 027540d7 has its CatchHandler @ 026541bc */
                    /* try { // try from 026540d8 to 02754117 has its CatchHandler @ 02653dc0 */
  plVar7 = (long *)System_Object__GetType_3142aac(param_2,0);
  puVar1 = PTR_DAT_049b3bd0;
  do {
    uVar15 = *(undefined8 *)puVar6;
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      FUN_021f0574();
    }
                    /* try { // try from 02654118 to 0275411b has its CatchHandler @ 026541c4 */
                    /* try { // try from 0265411c to 0275411f has its CatchHandler @ 026541b8 */
    uVar15 = System_Type__GetTypeFromHandle_310ebfc(uVar15,0);
                    /* try { // try from 02654120 to 02754123 has its CatchHandler @ 026541ac */
                    /* try { // try from 02654124 to 02754127 has its CatchHandler @ 026541a4 */
                    /* try { // try from 02654128 to 0275412b has its CatchHandler @ 026541a0 */
                    /* try { // try from 0265412c to 0275412f has its CatchHandler @ 0265419c */
    uVar8 = System_Type__op_Inequality_3118ac4(plVar7,uVar15,0);
                    /* try { // try from 02654130 to 02754133 has its CatchHandler @ 02654188 */
    if ((uVar8 & 1) == 0) {
      return;
    }
                    /* try { // try from 02654134 to 02754137 has its CatchHandler @ 0265417c */
                    /* try { // try from 02654138 to 0275413b has its CatchHandler @ 02654194 */
                    /* try { // try from 0265413c to 0275413f has its CatchHandler @ 02654178 */
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                    /* try { // try from 02654140 to 02754143 has its CatchHandler @ 02654190 */
      FUN_021f0574();
    }
                    /* try { // try from 02654144 to 02754147 has its CatchHandler @ 02654174 */
                    /* try { // try from 02654148 to 0275414b has its CatchHandler @ 0265418c */
                    /* try { // try from 0265414c to 0275414f has its CatchHandler @ 0265416c */
                    /* catch() { ... } // from try @ 02653fec with catch @ 02654150
                       try { // try from 02654150 to 027541db has its CatchHandler @ 02653dc0 */
    uVar8 = System_Type__op_Inequality_3118ac4(plVar7,0,0);
                    /* catch() { ... } // from try @ 02654090 with catch @ 02654154 */
    if ((uVar8 & 1) == 0) {
      return;
    }
                    /* catch() { ... } // from try @ 02654078 with catch @ 02654158 */
                    /* catch() { ... } // from try @ 02653f64 with catch @ 0265415c */
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_026542ec;
                    /* catch() { ... } // from try @ 02654060 with catch @ 02654160 */
                    /* catch() { ... } // from try @ 02654040 with catch @ 02654164 */
                    /* catch() { ... } // from try @ 02654024 with catch @ 02654168 */
                    /* catch() { ... } // from try @ 0265414c with catch @ 0265416c */
    uVar8 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (*(long *)(param_1 + 0x20),plVar7,&plStack_68,*(undefined8 *)puVar4);
                    /* catch() { ... } // from try @ 02653fcc with catch @ 02654170 */
    if ((uVar8 & 1) == 0) {
                    /* catch() { ... } // from try @ 02654144 with catch @ 02654174 */
                    /* catch() { ... } // from try @ 0265413c with catch @ 02654178 */
                    /* catch() { ... } // from try @ 02654134 with catch @ 0265417c */
                    /* catch() { ... } // from try @ 02653ffc with catch @ 02654180 */
                    /* catch() { ... } // from try @ 02653f50 with catch @ 02654184 */
      uVar15 = *(undefined8 *)PTR_DAT_049caf90;
                    /* catch() { ... } // from try @ 02654130 with catch @ 02654188 */
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 02653fb4 with catch @ 0265418c
                       catch() { ... } // from try @ 02654148 with catch @ 0265418c */
        FUN_021f0574();
      }
                    /* catch() { ... } // from try @ 02653f94 with catch @ 02654190
                       catch() { ... } // from try @ 02654140 with catch @ 02654190 */
                    /* catch() { ... } // from try @ 02653f74 with catch @ 02654194
                       catch() { ... } // from try @ 02654138 with catch @ 02654194 */
                    /* catch() { ... } // from try @ 02653f38 with catch @ 02654198 */
      plVar9 = (long *)System_Type__GetTypeFromHandle_310ebfc(uVar15,0);
                    /* catch() { ... } // from try @ 0265412c with catch @ 0265419c */
                    /* catch() { ... } // from try @ 02654128 with catch @ 026541a0 */
                    /* catch() { ... } // from try @ 02654124 with catch @ 026541a4 */
                    /* catch() { ... } // from try @ 02653f04 with catch @ 026541a8 */
                    /* catch() { ... } // from try @ 02654120 with catch @ 026541ac */
      plVar10 = (long *)FUN_021f04e4(*(undefined8 *)puVar2,1);
                    /* catch() { ... } // from try @ 02653ef0 with catch @ 026541b0 */
      if (plVar10 == (long *)0x0) goto LAB_026542ec;
                    /* catch() { ... } // from try @ 02653ed4 with catch @ 026541b4 */
                    /* catch() { ... } // from try @ 0265411c with catch @ 026541b8 */
                    /* catch() { ... } // from try @ 026540cc with catch @ 026541bc */
                    /* catch() { ... } // from try @ 02653ea8 with catch @ 026541c0 */
                    /* catch() { ... } // from try @ 02654118 with catch @ 026541c4 */
      if ((plVar7 != (long *)0x0) &&
         (lVar11 = thunk_FUN_0222c938(plVar7,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)) {
        uVar15 = thunk_FUN_0223a53c();
                    /* WARNING: Subroutine does not return */
        FUN_021f0564(uVar15,0);
      }
      if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
                    /* try { // try from 026541dc to 027541f3 has its CatchHandler @ 02654260 */
      plVar10[4] = (long)plVar7;
      thunk_FUN_021f190c(plVar10 + 4,plVar7);
      if (plVar9 == (long *)0x0) goto LAB_026542ec;
                    /* try { // try from 026541f4 to 0275424f has its CatchHandler @ 02653dc0 */
      uVar15 = (**(code **)(*plVar9 + 0x948))(plVar9,plVar10,*(undefined8 *)(*plVar9 + 0x950));
      lVar11 = System_Activator__CreateInstance_312a8a4(uVar15,0);
      if (lVar11 == 0) {
        plVar9 = (long *)0x0;
      }
      else {
        uVar15 = *(undefined8 *)puVar3;
        plVar9 = (long *)thunk_FUN_0222c938(lVar11,uVar15);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f0a20(lVar11,uVar15);
        }
      }
      plStack_68 = plVar9;
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_026542ec;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (*(long *)(param_1 + 0x20),plVar7,plVar9,*(undefined8 *)puVar5);
    }
    plVar9 = plStack_68;
    if (plStack_68 == (long *)0x0) goto LAB_026542ec;
                    /* try { // try from 02654250 to 0275425f has its CatchHandler @ 02654260 */
    lVar13 = *plStack_68;
    lVar11 = *(long *)puVar3;
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
                    /* catch() { ... } // from try @ 026541dc with catch @ 02654260
                       catch() { ... } // from try @ 02654250 with catch @ 02654260 */
                    /* try { // try from 02654264 to 02754267 has its CatchHandler @ 02654270 */
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
                    /* try { // try from 02654268 to 02754273 has its CatchHandler @ 02653dc0 */
                    /* catch() { ... } // from try @ 02654264 with catch @ 02654270 */
        if (*(long *)(piVar14 + -2) == lVar11) {
          puVar12 = (undefined8 *)(lVar13 + (long)(*piVar14 + 2) * 0x10 + 0x138);
          goto LAB_026542a0;
        }
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar8 != 0);
    }
    puVar12 = (undefined8 *)FUN_02229a4c(plStack_68,lVar11,2);
LAB_026542a0:
    (*(code *)*puVar12)(plVar9,param_2,puVar12[1]);
    if (plVar7 == (long *)0x0) goto LAB_026542ec;
    plVar7 = (long *)(**(code **)(*plVar7 + 0x888))(plVar7,*(undefined8 *)(*plVar7 + 0x890));
  } while( true );
}

