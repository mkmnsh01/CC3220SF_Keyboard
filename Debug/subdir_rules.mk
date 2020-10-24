################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
%.obj: ../%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccs1011/ccs/tools/compiler/ti-cgt-arm_20.2.2.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=vfplib -me --include_path="C:/Users/Shivangi/workspace_v10/Keyboard" --include_path="C:/ti/simplelink_cc32xx_sdk_4_30_00_06/source/ti/drivers/gpio" --include_path="C:/ti/simplelink_cc32xx_sdk_4_30_00_06/source" --include_path="C:/ti/simplelink_cc32xx_sdk_4_30_00_06/source/ti/devices/cc32xx/driverlib" --include_path="C:/ti/simplelink_cc32xx_sdk_4_30_00_06/source/ti/devices/cc32xx/inc" --include_path="C:/ti/simplelink_cc32xx_sdk_4_30_00_06/kernel/nortos" --include_path="C:/ti/simplelink_cc32xx_sdk_4_30_00_06/kernel/nortos/posix" --include_path="C:/ti/ccs1011/ccs/tools/compiler/ti-cgt-arm_20.2.2.LTS/include" --define=CC3220sf -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


