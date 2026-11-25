/* IL2CPP: Level$$GetColor
ColorType_o Level__GetColor (Level_o __this, ColorType_o color, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Type propagation algorithm not settling */
/* IL2CPP: Level$$GetColor
   ColorType_o Level__GetColor (Level_o __this, ColorType_o color, const MethodInfo* method); */

undefined8 Level__GetColor_2555cdc(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  int aiStack_48 [2];
  undefined8 uStack_38;
  
  puVar3 = PTR_DAT_049cb148;
  if ((bRam0000000004f4c0a6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb148);
    FUN_021f03f8(PTR_DAT_049cb150);
    FUN_021f03f8(PTR_DAT_049b5480);
    bRam0000000004f4c0a6 = 1;
  }
  aiStack_48[1] = 0xffffffff;
  uStack_38 = param_2;
  System_Collections_Generic_CollectionExtensions__GetValueOrDefault___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__25be1c8
            (*(undefined8 *)(param_1 + 0x38),&uStack_38,aiStack_48 + 1,aiStack_48,
             *(undefined8 *)puVar3);
  if (aiStack_48[0] != -1) {
                    /* try { // try from 02655d68 to 02755d93 has its CatchHandler @ 02655e80 */
    if (*(char *)(param_1 + 0x44) == '\0') {
      iVar4 = CloudPrefsInt__get_Value_24e99c0(param_1 + 8,0);
    }
    else {
      iVar4 = 0;
    }
    puVar3 = PTR_DAT_049cb150;
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 02655d94 to 02755ddb has its CatchHandler @ 02655b20 */
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    iVar1 = *(int *)(*(long *)(param_1 + 0x28) + 0x74);
    iVar2 = *(int *)(param_1 + 0x40);
    if (*(int *)(*(long *)PTR_DAT_049b5480 + 0xe4) == 0) {
      FUN_021f0574();
    }
    Extensions__GetWrapped___Il2CppFullySharedGenericType__25efed0
              (uVar5,aiStack_48[0] + iVar4 + iVar2 + iVar1 + -1,&uStack_38,*(undefined8 *)puVar3);
                    /* try { // try from 02655ddc to 02755de7 has its CatchHandler @ 02655e24 */
    param_2 = uStack_38;
  }
                    /* try { // try from 02655df4 to 02755e03 has its CatchHandler @ 02655e20 */
  return param_2;
}

