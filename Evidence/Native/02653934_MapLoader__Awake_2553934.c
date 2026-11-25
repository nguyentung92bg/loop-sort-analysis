/* IL2CPP: MapLoader$$Awake
void MapLoader__Awake (MapLoader_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MapLoader$$Awake
   void MapLoader__Awake (MapLoader_o* __this, const MethodInfo* method); */

void MapLoader__Awake_2553934(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x21;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049b5228;
                    /* try { // try from 02653938 to 0275393b has its CatchHandler @ 02653a20 */
                    /* try { // try from 0265393c to 02753957 has its CatchHandler @ 02653478 */
  if ((bRam0000000004f4c092 & 1) == 0) {
                    /* try { // try from 02653958 to 0275395b has its CatchHandler @ 02653964 */
    FUN_021f03f8(PTR_DAT_049caf10);
                    /* catch() { ... } // from try @ 02653958 with catch @ 02653964 */
    FUN_021f03f8(PTR_DAT_049b5228);
                    /* try { // try from 0265396c to 02753973 has its CatchHandler @ 02653a20 */
    bRam0000000004f4c092 = 1;
  }
  puVar2 = PTR_DAT_049caf10;
                    /* try { // try from 02653974 to 02753997 has its CatchHandler @ 02653478 */
                    /* catch() { ... } // from try @ 02653530 with catch @ 02653978
                       catch() { ... } // from try @ 02653820 with catch @ 02653978 */
                    /* catch() { ... } // from try @ 0265376c with catch @ 0265397c
                       catch() { ... } // from try @ 02653808 with catch @ 0265397c */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  LifetimeScopeH__InjectIfNotScoped_object__26546e4(param_1,*(undefined8 *)puVar2);
                    /* try { // try from 02653998 to 027539af has its CatchHandler @ 02653a10 */
  if ((bRam0000000004f4c093 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049caf18);
    FUN_021f03f8(PTR_DAT_049caf20);
    FUN_021f03f8(PTR_DAT_049bcb48);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049caf28);
    FUN_021f03f8(PTR_DAT_049caf30);
    bRam0000000004f4c093 = 1;
  }
  uStack_28 = 0;
  uStack_2c = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar3 = FUN_024f7024(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50),&uStack_28,
                         *(undefined8 *)PTR_DAT_049caf20);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if ((((*(long *)(param_1 + 0x20) != 0) &&
         (FUN_0235c744(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50),&stack0xffffffffffffffe8,
                       *(undefined8 *)PTR_DAT_049caf18), unaff_x21 != 0)) &&
        (plVar4 = (long *)PlaySessionModule__get_Current_2536d5c(unaff_x21,0), plVar4 != (long *)0x0
        )) && (lVar5 = (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180)),
              lVar5 != 0)) {
      uStack_2c = *(undefined4 *)(lVar5 + 0x18);
      uVar6 = System_Int32__ToString_30fbaa0(&uStack_2c,0);
      uVar6 = System_String__Concat_2f72b28(*(undefined8 *)PTR_DAT_049caf30,uVar6,0);
      uVar6 = UnityEngine_Resources__Load_object__26a73fc(uVar6,*(undefined8 *)PTR_DAT_049caf28);
      if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
        FUN_021f0574(*(long *)PTR_DAT_049b3b98);
      }
      UnityEngine_Object__Instantiate_object__2695910(uVar6,*(undefined8 *)PTR_DAT_049bcb48);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

