/* IL2CPP: GridSheet.Layouts$$GetLayout
GridSheet_Layout_o GridSheet_Layouts__GetLayout (GridSheet_Layouts_o* __this, int32_t layoutType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GridSheet.Layouts$$GetLayout
   GridSheet_Layout_o GridSheet_Layouts__GetLayout (GridSheet_Layouts_o* __this, int32_t layoutType,
   const MethodInfo* method); */

undefined8 GridSheet_Layouts__GetLayout_2560de8(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uStack_34;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049cb988;
                    /* try { // try from 02660e08 to 02760e0f has its CatchHandler @ 02660fe4 */
  if ((bRam0000000004f4c118 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb988);
    bRam0000000004f4c118 = 1;
  }
                    /* try { // try from 02660e28 to 02760e73 has its CatchHandler @ 02660fe8 */
  uStack_34 = param_2;
  System_Collections_Generic_CollectionExtensions__GetValueOrDefault___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__25be048
            (*(undefined8 *)(param_1 + 0x40),&uStack_34,&uStack_28,*(undefined8 *)puVar1);
  return uStack_28;
}

