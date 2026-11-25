/* IL2CPP: MapLoader$$CreateMap
void MapLoader__CreateMap (MapLoader_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MapLoader$$CreateMap
   void MapLoader__CreateMap (MapLoader_o* __this, const MethodInfo* method); */

void MapLoader__CreateMap_25539a8(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  long lStack_18;
  
                    /* try { // try from 026539b0 to 027539ff has its CatchHandler @ 02653478 */
  if ((bRam0000000004f4c093 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049caf18);
    FUN_021f03f8(PTR_DAT_049caf20);
    FUN_021f03f8(PTR_DAT_049bcb48);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049caf28);
                    /* try { // try from 02653a00 to 02753a0f has its CatchHandler @ 02653a10 */
    FUN_021f03f8(PTR_DAT_049caf30);
                    /* catch() { ... } // from try @ 02653998 with catch @ 02653a10
                       catch() { ... } // from try @ 02653a00 with catch @ 02653a10 */
    bRam0000000004f4c093 = 1;
  }
                    /* try { // try from 02653a14 to 02753a17 has its CatchHandler @ 02653a20 */
                    /* try { // try from 02653a18 to 02753a23 has its CatchHandler @ 02653478 */
  uStack_28 = 0;
  uStack_2c = 0;
                    /* catch() { ... } // from try @ 02653938 with catch @ 02653a20
                       catch() { ... } // from try @ 0265396c with catch @ 02653a20
                       catch() { ... } // from try @ 02653a14 with catch @ 02653a20 */
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* try { // try from 02653a30 to 02753aa7 has its CatchHandler @ 02653a30
                       catch() { ... } // from try @ 02653a30 with catch @ 02653a30
                       catch() { ... } // from try @ 02653bf0 with catch @ 02653a30
                       catch() { ... } // from try @ 02653ce4 with catch @ 02653a30
                       catch() { ... } // from try @ 02653d40 with catch @ 02653a30
                       catch() { ... } // from try @ 02653da8 with catch @ 02653a30 */
    uVar1 = FUN_024f7024(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50),&uStack_28,
                         *(undefined8 *)PTR_DAT_049caf20);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if ((((*(long *)(param_1 + 0x20) != 0) &&
         (FUN_0235c744(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50),&lStack_18,
                       *(undefined8 *)PTR_DAT_049caf18), lStack_18 != 0)) &&
        (plVar2 = (long *)PlaySessionModule__get_Current_2536d5c(lStack_18,0), plVar2 != (long *)0x0
        )) && (lVar3 = (**(code **)(*plVar2 + 0x178))(plVar2,*(undefined8 *)(*plVar2 + 0x180)),
              lVar3 != 0)) {
      uStack_2c = *(undefined4 *)(lVar3 + 0x18);
      uVar4 = System_Int32__ToString_30fbaa0(&uStack_2c,0);
                    /* try { // try from 02653aa8 to 02753aaf has its CatchHandler @ 02653cf4 */
      uVar4 = System_String__Concat_2f72b28(*(undefined8 *)PTR_DAT_049caf30,uVar4,0);
      uVar4 = UnityEngine_Resources__Load_object__26a73fc(uVar4,*(undefined8 *)PTR_DAT_049caf28);
                    /* try { // try from 02653acc to 02753acf has its CatchHandler @ 02653cec */
                    /* try { // try from 02653ad4 to 02753adf has its CatchHandler @ 02653cf0 */
      if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
        FUN_021f0574(*(long *)PTR_DAT_049b3b98);
      }
                    /* try { // try from 02653af4 to 02753b17 has its CatchHandler @ 02653cf8 */
      UnityEngine_Object__Instantiate_object__2695910(uVar4,*(undefined8 *)PTR_DAT_049bcb48);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

