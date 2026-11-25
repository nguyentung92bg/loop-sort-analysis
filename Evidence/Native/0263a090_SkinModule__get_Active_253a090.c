/* IL2CPP: SkinModule$$get_Active
System_String_o* SkinModule__get_Active (SkinModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SkinModule$$get_Active
   System_String_o* SkinModule__get_Active (SkinModule_o* __this, const MethodInfo* method); */

undefined8 SkinModule__get_Active_253a090(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049b5310;
                    /* try { // try from 0263a09c to 0273a0ab has its CatchHandler @ 0263a1bc */
                    /* try { // try from 0263a0ac to 0273a137 has its CatchHandler @ 02639514 */
  if ((bRam0000000004f4bf7e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5120);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049ca380);
    bRam0000000004f4bf7e = 1;
  }
  puVar2 = PTR_DAT_049c5120;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar3 = PlayerPrefsString__HasValue_3f0e508(*(long *)(*(long *)puVar1 + 0xb8) + 0x50,0);
  if ((uVar3 & 1) == 0) {
                    /* try { // try from 0263a158 to 0273a15b has its CatchHandler @ 0263a24c */
                    /* try { // try from 0263a15c to 0273a15f has its CatchHandler @ 0263a248 */
    plVar6 = (long *)(param_1 + 0x18);
    lVar5 = *plVar6;
                    /* try { // try from 0263a160 to 0273a163 has its CatchHandler @ 0263a1c0 */
    if (lVar5 == 0) {
                    /* try { // try from 0263a164 to 0273a167 has its CatchHandler @ 0263a1bc */
                    /* catch() { ... } // from try @ 0263a02c with catch @ 0263a168
                       try { // try from 0263a168 to 0273a283 has its CatchHandler @ 02639514 */
      if (*(long *)(param_1 + 0x10) != 0) {
                    /* catch() { ... } // from try @ 0263a010 with catch @ 0263a16c */
                    /* catch() { ... } // from try @ 026398ac with catch @ 0263a170 */
                    /* catch() { ... } // from try @ 02639810 with catch @ 0263a174 */
                    /* catch() { ... } // from try @ 02639fec with catch @ 0263a178 */
        lVar5 = RemoteConfigModule__GetDataClassNew_object__26a494c
                          (*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_049ca380);
                    /* catch() { ... } // from try @ 02639fd0 with catch @ 0263a17c */
                    /* catch() { ... } // from try @ 02639fa8 with catch @ 0263a180 */
        *plVar6 = lVar5;
                    /* catch() { ... } // from try @ 02639f8c with catch @ 0263a184 */
                    /* catch() { ... } // from try @ 02639a48 with catch @ 0263a188 */
                    /* catch() { ... } // from try @ 026396b4 with catch @ 0263a18c */
        thunk_FUN_021f190c(plVar6,lVar5);
                    /* catch() { ... } // from try @ 02639dfc with catch @ 0263a190 */
        if (lVar5 != 0) goto LAB_0263a194;
      }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02639880 with catch @ 0263a1a4 */
      FUN_021f06a0();
    }
LAB_0263a194:
                    /* catch() { ... } // from try @ 02639c9c with catch @ 0263a194 */
                    /* catch() { ... } // from try @ 02639be0 with catch @ 0263a198 */
                    /* catch() { ... } // from try @ 026398b4 with catch @ 0263a19c */
                    /* catch() { ... } // from try @ 0263988c with catch @ 0263a1a0 */
    return *(undefined8 *)(lVar5 + 0x10);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* try { // try from 0263a138 to 0273a13b has its CatchHandler @ 0263a230 */
    FUN_021f0574();
  }
  puVar2 = PTR_DAT_049c5120;
                    /* try { // try from 0263a13c to 0273a13f has its CatchHandler @ 0263a22c */
                    /* try { // try from 0263a140 to 0273a143 has its CatchHandler @ 0263a254 */
                    /* try { // try from 0263a144 to 0273a147 has its CatchHandler @ 0263a218 */
                    /* try { // try from 0263a148 to 0273a14b has its CatchHandler @ 0263a204 */
  lVar5 = *(long *)(*(long *)puVar1 + 0xb8);
                    /* try { // try from 0263a14c to 0273a14f has its CatchHandler @ 0263a1d8 */
                    /* try { // try from 0263a150 to 0273a153 has its CatchHandler @ 0263a1cc */
                    /* try { // try from 0263a154 to 0273a157 has its CatchHandler @ 0263a1c8 */
  if ((bRam0000000004f5c3e9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4538,0);
    FUN_021f03f8(PTR_DAT_049b9d88);
    FUN_021f03f8(PTR_DAT_049c5120);
    bRam0000000004f5c3e9 = 1;
  }
  lVar4 = *(long *)puVar2;
  uStack_28 = 0;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
    lVar4 = *(long *)puVar2;
  }
  if (**(long **)(lVar4 + 0xb8) != 0) {
    uVar3 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (**(long **)(lVar4 + 0xb8),*(undefined8 *)(lVar5 + 0x58),&uStack_28,
                       *(undefined8 *)PTR_DAT_049b4538);
    if ((uVar3 & 1) == 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uStack_28 = UnityEngine_PlayerPrefs__GetString_3c0ff88
                            (*(undefined8 *)(lVar5 + 0x58),*(undefined8 *)(lVar5 + 0x50),0);
      if (**(long **)(*(long *)puVar2 + 0xb8) == 0) goto LAB_0400e374;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (**(long **)(*(long *)puVar2 + 0xb8),*(undefined8 *)(lVar5 + 0x58),uStack_28,
                 *(undefined8 *)PTR_DAT_049b9d88);
    }
    return uStack_28;
  }
LAB_0400e374:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

