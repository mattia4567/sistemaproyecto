
## Institución

**EEST N.º 1 “Eduardo Ader” — Vicente López**  
**Curso:** 5.º año, 3.ª división  
**Materia:** Laboratorio de Programación (LPR)  
**Docentes:** Ganduglia, Yamil; Mansilla Muñoz, York Elías  
**Proyecto:** SISTEMAPROYECTO — TMC (Teknical May Cry)  
**Ciclo lectivo:** 2026

---

## Descripción del Proyecto

**Teknical May Cry (TMC)** es un proyecto escolar desarrollado en el marco del Proyecto Integrador Anual de 5.º año de la escuela técnica.

El repositorio centraliza el código fuente, la documentación técnica, los manuales y las evidencias de desarrollo del proyecto. Su finalidad es organizar el trabajo realizado durante el ciclo lectivo, aplicar los conocimientos adquiridos en programación y utilizar herramientas de control de versiones para registrar y documentar los avances.

El proyecto busca mantener una estructura organizada que facilite el desarrollo colaborativo, la consulta de documentación y el seguimiento de las modificaciones realizadas durante su elaboración.

## Integrantes (Grupo N.º 03 — Divisiones A-B)

- **Lucas del Pino** — Desarrollo y documentación del proyecto.
- **Federico Mattia** — Desarrollo, organización del repositorio y documentación técnica.
- **Máximo Orue** — Colaboración en el desarrollo y las actividades del proyecto.
- **Ulises Ferrari** — Colaboración en el desarrollo y las actividades del proyecto.

## Requisitos e Instalación

Para consultar y trabajar con el repositorio, se recomienda contar con las siguientes herramientas:

- **Git:** para gestionar el control de versiones.
- **Visual Studio Code:** como entorno de desarrollo.
- **Compilador de C++ compatible con el código fuente**, si se necesita compilar y ejecutar el programa.
- **Lector de PDF y editor Markdown:** para consultar los documentos del proyecto.

### Instalación

1. Instalar Git y Visual Studio Code.
2. Clonar el repositorio utilizando su URL:

   ```bash
   git clone URL_DEL_REPOSITORIO
   ```

3. Ingresar en la carpeta del proyecto:

   ```bash
   cd SISTEMAPROYECTO
   ```

4. Abrir la carpeta en Visual Studio Code:

   ```bash
   code .
   ```

**Nota:** reemplazar `URL_DEL_REPOSITORIO` por la dirección real del repositorio de GitHub.

## Ejecución

El código fuente principal se encuentra en `src/main.cpp`.

Las instrucciones específicas de compilación y ejecución deben ajustarse a las características de la versión actual del programa y al compilador de C++ instalado.

Como referencia, si el programa puede compilarse directamente con GCC, se puede utilizar:

```bash
g++ src/main.cpp -o programa.exe
```

En PowerShell, ejecutar el programa mediante:

```powershell
.\programa.exe
```

**Importante:** estos comandos son orientativos. La compilación debe verificarse con el código fuente y las dependencias reales del proyecto.

## Estructura Obligatoria del Repositorio

```text
SISTEMAPROYECTO/
├── .gitignore
├── LICENSE
├── README.md
├── Docs/
│   ├── InformeEEST1_LPR2026_ACT05_G03_v1_0_0.pdf
│   └── manuales/
│       └── manual_programador_v1.0.0.md
├── src/
│   └── main.cpp
└── Capturas/
    └── ejecucion_struct.png
```

### Descripción de los archivos y directorios

- **`.gitignore`:** define los archivos y directorios que Git debe excluir del seguimiento.
- **`LICENSE`:** contiene los términos de la licencia del proyecto.
- **`README.md`:** presenta la descripción general y la organización del repositorio.
- **`Docs/`:** almacena informes y documentación formal.
- **`Docs/manuales/`:** contiene manuales técnicos y documentación para programadores.
- **`src/`:** contiene el código fuente de la aplicación.
- **`Capturas/`:** reúne evidencias gráficas de ejecución y pruebas.

## Documentación y Evidencias

El repositorio contempla los siguientes recursos:

- **Informe del proyecto:** `Docs/InformeEEST1_LPR2026_ACT05_G03_v1_0_0.pdf`.
- **Manual del programador:** `Docs/manuales/manual_programador_v1.0.0.md`.
- **Evidencia de ejecución:** `Capturas/ejecucion_struct.png`.

Estos documentos permiten consultar el desarrollo técnico, comprender la organización del código y observar evidencias del funcionamiento del programa.

## Control de Versiones

El proyecto utiliza Git y GitHub para centralizar los archivos y mantener un historial de modificaciones.

Se recomienda realizar commits descriptivos que permitan identificar los cambios realizados en cada versión.

Ejemplo:

```bash
git add .
git commit -m "Documentar estructura inicial del proyecto"
git push
```

## Objetivos del Proyecto

- Organizar el desarrollo del Proyecto Integrador Anual.
- Aplicar conceptos de programación y desarrollo de software.
- Mantener el código fuente y la documentación en un repositorio centralizado.
- Registrar evidencias de ejecución y pruebas.
- Documentar los procedimientos técnicos mediante informes y manuales.
- Utilizar Git y GitHub para gestionar las versiones del proyecto.

## Licencia

El proyecto dispone de un archivo `LICENSE` en la raíz del repositorio. Consultar ese archivo para conocer las condiciones de uso, modificación y distribución del software.

---

**SISTEMAPROYECTO — TMC (Teknical May Cry)**  
Proyecto Integrador Anual · Laboratorio de Programación · 2026
